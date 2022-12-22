#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int dem=0;
		long long n;
		scanf("%lld",&n);
		for(long long i=2 ; i<=n; i++){	
			while(n % i == 0){				
				n/=i;
				printf("%lld ",i);
			}	
		}
		printf("\n");
	}
}

