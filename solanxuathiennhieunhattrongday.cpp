#include<stdio.h>
int b[100];
int c[100];
void nhap_mang(int a[100],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=1;
	}
}
void xuat_mang(int a[100],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		int dem1=1;
		if(b[i]){
			b[i]=0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					b[j]=0;
					++dem1;
				}
			}
			if(dem1>=dem){
				dem=dem1;
				c[i]=dem;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(c[i]==dem) printf("%d ",a[i]);
	}
}
int main(){
	int n,t,a[100];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		nhap_mang(a,n);
		xuat_mang(a,n);
		printf("\n");
	}
}
