#include<stdio.h>

int a[100];
int fibo(int n){
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	return a[n];
}

int main(){
	int n;
	scanf("%d",&n);
	int b[n][n];
	int hang=n,cot=n,k=0,p=0;
	while(k<n*n){
		for(int i=p;i<hang;i++){
			b[p][i]=fibo(k);
			k++;
		}
		for(int i=p+1;i<hang;i++){
			b[i][cot-1]=fibo(k);
			k++;
		}
		for(int i=cot-2;i>=p;i--){
			b[hang-1][i]=fibo(k);
			k++;
		}
		for(int i=hang-2;i>p;i--){
			b[i][p]=fibo(k);
			k++;
		}
		hang--;cot--;p++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
