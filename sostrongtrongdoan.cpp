#include<stdio.h>
long long sTrong(long long n){
	long long tong=0;
	int k=n;
	while(n>0){
		long long tich=1;
		int dem=n%10;
		for(int i=1;i<=dem;i++){
			tich*=i;
		}
		tong+=tich;
		n/=10;
	}
	if(k==tong){
		return k;
	}
	else{
		return 0;
	}
}
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	if(a>b){
		int c=a;
		a=b;
		b=c;
	}
	for(long long i=a;i<=b;i++){
		if(sTrong(i)){
			printf("%lld ",i);
		}
	}
}
