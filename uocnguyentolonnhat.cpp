#include<stdio.h>
#include<math.h>
typedef long long ll;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	ll n;
	ll a[40];
	 
	scanf("%lld",&n);
	int dem=0;
	while(n%2==0){
		a[++dem]=2;
		n/=2;
	}
	for(int i=3;i<=sqrt(n);i+=2){
		while(n%i==0){
			a[++dem]=i;
			n/=i;
		}
	}
	if(n>1) a[++dem]=n;
	
		printf("%lld\n",a[dem]);
	
}
}
