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
	int tmp=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(i==0){
			printf("%d ",a[0]);
		}
		if(i!=0){
			if(a[i]!=a[0]){
				printf("%d",a[i]);
				break;
			}
		}
	}
}
int main(){
	nhap();
	test();
	return 0;
}
