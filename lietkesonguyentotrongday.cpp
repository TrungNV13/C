#include<stdio.h>
#include<math.h>
int prime(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	} return 1;
}
void nhap(int n,int a[]){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int main(){
	int dem=0;
	int n,a[1000];
	scanf("%d",&n);
	nhap(n,a);
	for(int i=0;i<n;i++){
		if(prime(a[i])) ++dem;
	}
	printf("%d ",dem);
	for(int i=0;i<n;i++){
		if(prime(a[i])) printf("%d ",a[i]);
	}
}
