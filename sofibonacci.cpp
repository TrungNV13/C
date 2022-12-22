#include<stdio.h>
long long fibonacci(long long n,long long a[]){
	for(long long i=1;i<=n;i++){
		if(i==1 || i==2) a[i]=1;
		else{
			a[i]=a[i-1]+a[i-2];
		}
	}
	return a[n];
}
int main(){
    long long t,n;
    long long a[100];
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        if(fibonacci(n,a)) printf("%lld\n",fibonacci(n,a));
    }
    return 0;
}
