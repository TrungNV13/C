#include<stdio.h>
void nguyen_to(long long n){
    for(long long i=2;i<=n;i++){
        int dem=0;
        while(n%i==0){
            ++dem;
            n/=i;
        }
        if(dem){
        	printf("%lld(%d) ",i,dem);
		}
    }
}
int main(){
    long long t,n;
    scanf("%lld",&t);
    for(long long i=1;i<=t;i++){
    	scanf("%lld",&n);;
    	printf("Test %lld: ",i);
    	nguyen_to(n);
    	printf("\n");
	}
}
