#include<stdio.h>
int b[100],c[100];
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
			for(int j=i+1;j<n;j++){
				if(a[j]>a[j-1]){
					++dem1;
					if(j==n-1) {
						b[j]=0;
						c[j]=dem1;
					}
					b[j-1]=0;
				}
				else{
					if(j==n-1) {
						c[j]=0;
						b[j]=0;
					}
					b[j-1]=0;
					break;
				}
			}
			if(dem1>=dem){
				dem=dem1;
				for(int j=i;j<n-1;j++){
					c[j]=dem;
				}
			}
			else{
				for(int j=i;j<n-1;j++){
					c[j]=0;
				}
			}
		}
	}
	int test=0;
	printf("%d\n",dem);
	for(int i=0;i<n;i++){
		if(c[i]==dem){
			printf("%d ",a[i]);
			++test;
		}
		if(test==dem){
			printf("\n");
			test=0;
		}
	}
}
int main(){
	int t,n,a[100];
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		nhap_mang(a,n);
		printf("Test %d:\n",i);
		xuat_mang(a,n);
		printf("\n");
	}
}
