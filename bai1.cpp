#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d", &n);
	float *a=(float*)calloc(n,sizeof(float));
	for(int i = 0 ; i<n; i++){
		scanf("%f", &a[i]);
	} 
	for(int i = 0; i<n; i++){
		printf("%.2f ", a[i]);
	}
}
