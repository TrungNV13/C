#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int dem=0;
		long long n;
		scanf("%lld",&n);
		for(long long i=2;i<= sqrt(n);i++){
			if(n%i==0){
				++dem;		
			}
		}
		if(dem==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
