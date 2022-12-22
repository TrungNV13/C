#include<stdio.h>
#define MAX 100
void nhapmang(int a[MAX][MAX],int n){
	int hang=n,cot=n,k=1,p=0;
	while(k<=n*n){
		for(int i=p	;i<hang;i++) a[p][i]=k++;
		for(int i=p+1;i<hang;i++) a[i][cot-1]=k++;
		for(int i=cot-2;i>=p;i--) a[hang-1][i]=k++;
		for(int i=hang-2;i>p;i--) a[i][p]=k++;
		p++;hang--;cot--;
	}
}
void xuatmang(int a[MAX][MAX], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[MAX][MAX];
	nhapmang(a,n);
	xuatmang(a,n);
}
