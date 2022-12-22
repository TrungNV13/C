#include<stdio.h>
#define max 100000
int main(){
	int t;
	long long n,a[max];
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		int dem=0;
		for(long long i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		for(long long i=0;i<n;i++){
			for(long long j=i+1;j<n;j++){
				if(a[i]==a[j]){
					++dem;
					printf("%lld\n",a[i]);
					break;
				}
			}
			if(dem>0) break;
		}
		if(dem==0) printf("NO\n");
	}
}
