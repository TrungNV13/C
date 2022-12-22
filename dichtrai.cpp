#include<stdio.h>
int n;
int a[100];
int m;
void nhap(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
}
void test(){
	for(int i=m;i<n;i++){
		printf("%d ",a[i]);
	}
	for(int i=0;i<m;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	nhap();
	test();
}
