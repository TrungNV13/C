#include<stdio.h>
long long a[100];
void fibo( ){
	a[0]=0;
	a[1]=1;
	for(long long i=2;i<100;i++){
		 a[i]=a[i-1] + a[i-2];
	}
}
int main(){
	int t;
	long long n;
	scanf("%d",&t);
	fibo();
	while(t--){
		scanf("%lld",&n);
		int dem=0;
		for(long long i=0;i<100;i++){
			if(n==a[i]) {
				 printf("YES\n");
				break;
			}
			else if(a[i]>n) {
			printf("NO\n"); break;
		}
		}
	}
}
