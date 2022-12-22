#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		int le=0;
		int chan=0;
		while(n>0){
			long long du=n%10;
			if(du%2!=0){
				++le;
			}
			if(du%2==0){
				++chan;
			}
			n/=10;
		}
		printf("%d %d\n",le,chan);
	}
}
