#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long k=n;
		int dem=0;
		int dem1=0;
		//scanf("%lld",&n);
		while(n>0){
			long long	tmp =n%10;
			n /= 10;
			if( tmp == 0 || tmp%6==0 || tmp%8==0){
				++dem;
			}				
		}
		while(k>0){
			long long tmk=k%10;
			k/=10;
			++dem1;
		}
		if(dem==dem1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
