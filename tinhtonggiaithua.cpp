#include<stdio.h>
int main(){
	unsigned int  n;
	scanf("%d",&n);
	unsigned long long S1=1;
	unsigned long long S=0;
	if(n<=20){
		for(int i=1 ; i<=n ; i++){
			S1*=i;
			S+=S1;
		}
	printf("%lld",S);
	}
	return 0;
}
