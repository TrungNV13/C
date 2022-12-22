#include<stdio.h>
int n;
int a[100];
void nhap(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void test(){
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
int main(){
	nhap();
	test();
	return 0;
}
