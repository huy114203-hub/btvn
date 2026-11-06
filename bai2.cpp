#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	float **b = (float**)malloc(n*sizeof(float*));
	for(int i = 0; i<n; i++){
		b[i] = (float*)malloc(m*sizeof(float));
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; i<m; j++){
			scanf("%f", &b[i][j]);
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; i<m; j++){
			printf("%f ", b[i][j]);
			printf("\n");
		}
	}
}
