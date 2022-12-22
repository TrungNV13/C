#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long a;
		scanf("%lld",&a);
		long long b=a*a;
		printf("%lld\n",b);
	}
	return 0;
}
