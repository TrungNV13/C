#include<stdio.h>
int n;
int a[100];
void nhap(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void sap_xep(){
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
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	nhap();
	sap_xep();
	return 0;
}
