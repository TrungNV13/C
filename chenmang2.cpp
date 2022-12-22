#include<stdio.h>
int n,m,p,t;
int a[100];
int b[100];
void nhap(){
	scanf("%d %d %d",&n,&m,&p);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
}
void chen_mang(){
	for(int i=0;i<p;i++){
		printf("%d ",a[i]);
	}
	for(int i=0;i<m;i++){
		printf("%d ",b[i]);
	}
	for(int i=p;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		nhap();
		printf("Test %d:\n",i);
		chen_mang();
	}
}
