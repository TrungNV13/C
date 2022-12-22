#include<stdio.h>
#include<stdbool.h>
bool giam(long long n){
	long long tmp=n%10;
	n/=10;
	while(n){
		long long tmc=n%10;
		if(tmp<tmc) return false;
		tmp=tmc;
		n/=10;
	}
	return true;
}
int main(){
	int t;
	long long a,b;
	scanf("%d",&t);
	while(t--){
		int dem=0;
		scanf("%lld %lld",&a,&b);
		if(a>b){
		long long tmp=a;
		a=b;      
		b=tmp;
	}
		for(long long i=a;i<=b;i++){
			if(giam(i)) ++dem;
		}
		printf("%d\n",dem);
	}
}
