#include<stdio.h>
int main(){
	int n,dem=0;
	scanf("%d",&n);
	while(n){
		n/=10;
		++dem;
	}
	printf("%d",dem);
}
