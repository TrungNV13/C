#include<stdio.h>
#include<math.h>
int main(){
	unsigned int t;
	scanf("%d",&t);
	while(t--){	
		long long n;
		scanf("%lld",&n);
		long long  dem=0;		
			for(long long i=1; i<=sqrt(n);i++){	
				if( n%i==0){
					if (i%2==0){
						++dem;
					}
					if((n/i)!=i && (n/i)%2==0){
						++dem;
					}
				}
			}
			printf("%lld\n",dem);		
	}
}
