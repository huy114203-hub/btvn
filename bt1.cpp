#include<iostream>
#include<string>
using namespace std;
class phuongtien{
	private:
		int ma_xe;
		string loai_xe;
		int gio_vao;
		int gio_do;
	public:
		phuong_tien();
		phuong_tien(int ma, string loai, int vao, int tg);
		int lay_ma_xe() const;
		string lay_loai_xe() const;
		double tinh_phi() const;
		void hien_thi() const;
};

phuongtien::phuongtien(){
	ma_xe = 0;
	loai_xe = "";
	gio_vao = 0;
	gio_do = 0;
}

phuong_tien::phuong_tien(int ma, string loai, int vao, int tg){
	ma_xe = ma;
	loai_xe = loai;
	gio_vao = vao;
	gio_do = tg;
}

int phuong_tien::lay_ma_xe(){
	return ma_xe;
}

std::string phuongtien::lay_loai_xe(){
	return loai_xe;
}

double phuongtien::tinh_phi(){
	int min = 2 < gio_do ? 2 : gio_do;
	double phi = 0;
	double tongphi = 0;
	if(loai_xe == "Car"){
		phi = 6;
	}
	if(loai_xe == "Motorcycle"){
		phi = 4;
	}
	if(loai_xe == "Bicycle"){
		phi = 2;
	}
	for(int i = 0; i<min; i++){
		if(gio_do == 6 || gio_do == 7 || gio_do == 8 || gio_do == 9 || gio_do == 15 || gio_do == 16 || gio_do == 17 || gio_do == 18){
			tongphi += phi * 130/100;
		}
		else{
			tongphi += phi * 95/100;
		}
	}
	for(int i = 0; i<gio_do; i++){
		tongphi += phi * 90/100;	
	}
}

void phuongtien::hien_thi(){
	cout<<ma_xe<<enld;
	cout<<loai_xe<<enld;
	cout<<gio_vao<<enld;
	cout<<tinh_phi()<<enld;
}

class bai_xe{
	private:
		int ma_bai;
		char kich_thuoc;
		phuong_tien pt1, pt2, pt3;
		bool co1, co2, co3;
	public:
		bai_xe();
		bai_xe(int ma, char kt);
		int lay_ma() const;
		bool them(phuong_tien v);
		bool xoa(int ma_xe);
		bool chua(int ma_xe) const;
		void hien_thi() const;
		bool co_loai(string loai, int& dem, double& tong) const;
};

bai_xe::baixe(){
	ma_bai = 0;
	kich_thuoc = "";
	co1 = false;
	co2 = false;
	co3 = false;
}

bai_xe::bai_xe(int ma, char kt){
	ma_bai = ma;
	kich_thuoc = kt;
	co1 = false;
	co2 = false;
	co3 = false;
}

bool bai_xe::them(phuong_tien v){
	int cap = (kich_thuoc == 'S') ? 1 (kich_thuoc == 'M') ? 2 : 3;
	if(cap >= 1 && co1 == false){
		pt1 = v;
		co1 = true;
		return true;
	}
	if(cap >= 2 && co2 == false){
		pt2 = v;
		co2 = true;
		return true;
	}
	if(cap >= 3 && co3 == false){
		pt3 = v;
		co3 = true;
		return true;
	}
	return false;
}
bool bai_xe::xoa(int ma_xe){
	if(co1 && pt1.lay_ma_xe() == ma_xe){
		if(co2){
			pt1 = pt2;
			if(co3){
				
			}
		}
	}
}
class SystemInterface{
	private:
		bai_xe bai1, bai2, bai3;
		bool co1, co2, co3;
	public:
		SystemInterface();
		void runMenu();
		
};
