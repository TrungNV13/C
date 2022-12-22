#include<stdio.h>
long long min(long long a, long long b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
int gcd(long long a, long long b){
	for(long long i=min(a,b);i>0;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
}
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld\n",gcd(a,b));
	printf("%lld",((a*b)/gcd(a,b)));
}
