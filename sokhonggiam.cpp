#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		int so,k=0,i=0;
		scanf("%lld",&n);
		long long tmp = n%10 ;
		n/=10;
		while(n>0){
			so=n%10;
			if(tmp >= so){
				k=1;
				printf("k = %d\n",k);
			}
			if(tmp < so){
				i=1;
				printf("i= %d\n",i);
			}
			tmp=so;
			n/=10;
		}
		printf("kc = %d\n",k);
		printf("ic = %d\n",i);
		if(k==1 && i==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
