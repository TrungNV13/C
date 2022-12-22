#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long t;
		scanf("%lld",&t);
		double k=1/(t*1.0);	
		printf("%.15lf\n",k);
	}
	return 0;	
}
