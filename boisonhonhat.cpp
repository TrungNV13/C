#include<stdio.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
ll LCM(ll n,ll m){
	if(m%n==0)return n;
	return LCM(m%n,n);
}

int kt(int n,int m){
	ll s=1;
	For(i,n,m)s=s*i/LCM(s,i);
	printf("%lld\n",s);
}
main(){	
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d %d",&n,&m );
		kt(n,m);
	}
}
