#include<stdio.h>
int main(){
	int n;
	int dem=0;
	int dem1=0;
	scanf("%d",&n);
	while(n){
		int num=n%10;
		if(num%2!=0){
			++dem;
		}
		if(num%2==0){
			++dem1;
		}
		n/=10;
		
	}
	printf("%d %d",dem,dem1);
}
