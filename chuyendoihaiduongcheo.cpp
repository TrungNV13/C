#include<stdio.h>

void nhap_mang(int a[50][50],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuat_mang(int a[50][50],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==i){
				int tmp=a[i][j];
				a[i][j]=a[i][n-1-i];
				a[i][n-1-i]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n,a[50][50];
	scanf("%d",&n);
	nhap_mang(a,n);
	xuat_mang(a,n);
}
