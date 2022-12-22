#include<stdio.h>
int a[100];
int n;
int chia_5(int a){
	int tmp=0;
	while(a!=0){
		int dem=a%10;
		tmp+=dem;
		a/=10;
	}
	if(tmp%5==0) return 1;
	return 0;
}
void nhap(){
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		a[i]=1;
	}
}
void check(){
	int dem=0l;
	for(int i=2;i<n;i++){
		if(a[i]){
			for(int j=2*i;j<n;j+=i){
				a[j]=0;
			}
		}
	}
	for(int i=2;i<n;i++){
		if(a[i]>0 && chia_5(i)) {
			printf("%d ",i);
			++dem;
		}
	}
	printf("\n%d",dem);
}
int main(){
	nhap();
	check();
}
