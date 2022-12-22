#include<stdio.h>
#include<stdbool.h>

#define max 50

bool nguyen_to(int n){
	if(n==1 || n==0) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

void nhap_mang(int a[max][max],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}

void xuat_mang(int a[max][max],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(nguyen_to(a[i][j])) dem+=a[i][j];
		}
	}
	printf("%d",dem);
}
int main(){
	int n;
	scanf("%d",&n);
	int a[max][max];
	nhap_mang(a,n);
	xuat_mang(a,n);
}
