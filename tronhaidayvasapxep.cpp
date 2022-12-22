#include<stdio.h>

void nhap_mang(int a[100],int b[100],int n){
	for(int i=0;i<2*n;i+=2){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<2*n;i+=2){
		scanf("%d",&b[i]);
	}
}
void tang(int a[100],int n){
	for(int i=0;i<2*n;i+=2){
		for(int j=i+2;j<2*n;j+=2){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
void giam(int b[100],int n){
	for(int i=1;i<2*n;i+=2){
		for(int j=i+2;j<2*n;j+=2){
			if(b[i]<=b[j]){
				int tmp=b[i];
				b[i]=b[j];
				b[j]=tmp;
			}
		}
	}
}
void xuat_mang(int a[100],int b[100],int n){
	for(int i=0;i<2*n;i++){
		if(i%2==0) printf("%d ",a[i]);
		else printf("%d ",b[i]);
	}
}
int main(){
	int n,t,a[100],b[100];
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		nhap_mang(a,b,n);
		tang(a,n);
		giam(b,n);
		printf("Test %d:\n",i);
		xuat_mang(a,b,n);
		printf("\n");
	}
}
