#include<stdio.h>
long long uoc_max(long long a,long long b){
	if(a<b){
		long long tmp=a;
		a=b;
		b=tmp;
	}
	long long r=1;
	while(r!=0){
		r=a%b;
		a=b;
		b=r;
	}
return a;
}
int main(){
	int t;
	long long a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld",&a,&b);
		printf("%lld %lld\n",(a*b)/uoc_max(a,b),uoc_max(a,b));
	}
}
