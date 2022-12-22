#include<stdio.h>
#include<stdbool.h>
bool thuan_nghich(long long n){
	int m=n;
	int tmp=0;
	while(n){
		tmp=tmp*10+n%10;
		n/=10;
	}
	if(tmp!=m) return false;
	return true;
}
bool le(long long n){
	while(n){
		int tmp=n%10;
		if(tmp%2==0) return false;
		n/=10;
	}
	return true;
}
bool le1(long long n){
	int tmp=0;
	while(n){
		tmp+=n%10;
		n/=10;
	}
	if(tmp%2==0 ) return false;
	return true;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(thuan_nghich(n) && le(n) && le1(n)) printf("YES\n");
		else printf("NO\n");
	}
}
