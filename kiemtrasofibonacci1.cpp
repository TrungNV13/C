#include<stdio.h>
long long fiBo(long long n){
	if(n==1 || n==0){
		return n;
	}
	else{
		return fiBo(n-1)+fiBo(n-2);
	}
}
int main(){
	long long n;
	scanf("%lld",&n);
	int dem=0;
	for(long long i=0;i<=n;i++){
		if(fiBo(i)==n){
			++dem;
			break;
		}
	}
	if(dem==1){
		printf("1");
	}
	else{
		printf("0");
	}
}
