#include<stdio.h>
int a[100];
int b[100];
int n_a;
int n_b;
int vi_tri;
void nhap(){
	scanf("%d %d",&n_a,&n_b);
	for(int i=0;i<n_a;i++){
		scanf("%d ",&a[i]);
	}
	for(int i=0;i<n_b;i++){
		scanf("%d ",&b[i]);
	}
	scanf("%d",&vi_tri);
}
void test(){
	for(int i=0;i<n_a;i++){
		if(i==vi_tri) break;
		printf("%d ",a[i]);
	}
	for(int i=0;i<n_b;i++){
		printf("%d ",b[i]);
	}
	for(int i=vi_tri;i<n_a;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	nhap();
	test();
	return 0;
}
