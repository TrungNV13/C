#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(n%2==0) printf("NO\n");
		else if(n==0) printf("NO\n");
		else if(n%2!=0){
			int chan=0,le=0;
			while(n){
				int tmp=n%10;
				if(tmp%2==0) ++chan;
				else ++le;
				n/=10;			
			}
			if(chan<le) printf("YES\n");
			else printf("NO\n");
		}
	}
}
