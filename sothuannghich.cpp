#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long tmp=n;
		long long dem=0;
		while(tmp>0){
			dem = dem*10+ tmp%10;
			tmp/=10;
		}
		if(dem==n){
			printf("YES\n");
		}	
		else{
			printf("NO\n");
		}
	}
}
