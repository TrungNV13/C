#include<stdio.h>
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);	
	long long tong=a + b;
	long long hieu=a-b;
	long long tich=a*b;
	long long chia=a/b;
	long long  chiaDu=a%b;
	float chiaThuc=a/(b*1.0);
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f",tong,hieu,tich,chia,chiaDu,chiaThuc);
	return 0;
}
