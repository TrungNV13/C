#include<stdio.h>
long long ucln(long long a,long long b){
	if(a<b){
		long long tmp=a;
		a=b;
		b=tmp;
	}
	long long r=1;
	while(r!=0){
		r=a%b;
		a=b;
		b=r;
	}
return a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b,c,d;
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		if(ucln(a,b)==ucln(c,d)) printf("YES\n");
		else printf("NO\n");
	}
}
