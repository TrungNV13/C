#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define max 30

int b[max][max];
int c[max];
bool nguyen_to(int n){
	if(n==1 || n==0) return false;
	for(int i=2;i<=sqrt(n);i++ ){
		if(n%i==0) return false;
	}
	return true;
}
void nhap_mang(int a[max][max] , int n ){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		c[i]=0;
	}
}
void xuat_mang(int a[max][max],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		int dem1=0;
		for(int j=0;j<n;j++){
			if(nguyen_to(a[i][j])) {
				++dem1;
				b[i][j]=1;
			}
		}
		if(dem1>dem){
			dem=dem1;
			c[i]=1;
			for(int k=0;k<i;k++){
				c[k]=0;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(c[i]==1){
			printf("%d\n",i+1);
			for(int j=0;j<n;j++){
				if(b[i][j]==1) printf("%d ",a[i][j]);
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[max][max];
	nhap_mang(a,n);
	xuat_mang(a,n);
	return 0;
}
