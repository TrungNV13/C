#include<stdio.h>
#include<stdbool.h>
#include<math.h>
long long check(long long n){
	int dem=0;
	while(n){
		 n/=10;
		++dem;
	}
	return dem;
}

bool chu_so_4(long long n){
	if(n==0) return false;
	while(n){
		long long tmp=n%10;
		if(tmp==4) return false;
		n/=10;
	}
	return true;
}
bool thuan_nghich(long long n){
	long long b=(long long)check(n)/2;
	if(check(n)%2!=0) b++;
	long long m=n/(pow(10,b));
	if(check(n)%2!=0) b--;
	long long tmp=0;
	int dem=0;
	while(n){
		tmp=tmp*10+n%10;
		n/=10;
		++dem;
		if(dem==b) break;
	}
	
	if(tmp==m) return true;
	return false;
}
bool chia_10(long long n){
	long long tmp=0;
	while(n){
		tmp+=n%10;
		n/=10;
	}
	if(tmp%10==0) return true;
	return false;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		for(long long i=pow(10,n-1);i<pow(10,n);i++){
			if(chu_so_4(i)&& chia_10(i) && thuan_nghich(i) ) printf("%lld ",i);
		}
		printf("\n");
	}
}
