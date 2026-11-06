#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char hoten[30];
    int msv;
    float d1, d2, d3;
}SV;
void nhap(SV a[], int n){
    for(int i = 0; i<n; i++){
        scanf("%s", a[i].hoten);
        scanf("%d", &a[i].msv);
        scanf("%f%f%f", &a[i].d1, &a[i].d2, &a[i].d3);
    }
}
void xuat(SV a[], int n){
    for(int i = 0; i<n; i++){
        printf("%s %d %f %f %f\n", a[i].hoten, a[i].msv, a[i].d1, a[i].d2, a[i].d3);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    SV *a = (SV*)malloc(n*sizeof(SV));
    nhap(a, n);
    xuat(a, n);
    free(a);
    return 0;
}


