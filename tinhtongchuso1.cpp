#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int dem=0;
	while(n){
		int u=n%10;
		n/=10;
		dem+=u;
	}
	printf("%d",dem);
}
