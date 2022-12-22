#include<stdio.h>
int main(){
	int n,chuSoDau,chuSoCuoi;
	scanf("%d",&n);
	chuSoCuoi= n%10;
	while(n>0){
		chuSoDau=n%10;
		n/=10;
	}
	printf("%d %d",chuSoDau,chuSoCuoi);
}
