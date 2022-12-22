#include<stdio.h>
int main(){
	int t;
	scanf("%lld",&t);
	while(t--){
		long long  n;
		scanf("%lld",&n);
		if(n==0) printf("YES\n");
		else{
			int k=0,l=0;	
			while(n){
				int  tmp=n%10;
				if(tmp%2==0) k=1;
				else{
					l=1;
					printf("NO\n");
					break;
				}
				n/=10;
			}
			if(k==1 && l==0) printf("YES\n");
		}
	}
}
