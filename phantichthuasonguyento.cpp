#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		printf("%lld = ",n);
		int dem=0;
		if(n==0 || n==1) {
		printf("%lld^1\n",n);
		}
		else{
		while(n%2==0){
			n/=2;
			++dem;
		}
		if(dem>0) {printf("2^%d",dem);
		if(n>1) printf(" * ");}
		for(int i=3;i<=n;i+=2){
			int dem1=0;
			while(n%i==0){
				n/=i;
				++dem1;
			}
			if(dem1) {printf("%d^%d",i,dem1);
			if(n>1) printf(" * ");}
		}
		if(n>1) printf("%d^1",n);
		printf("\n");
	}}
}
