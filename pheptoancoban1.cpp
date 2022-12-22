#include<stdio.h>
int main(){
	int a,b;
	
	scanf("%d",&a) ;
	scanf("%d",&b) ;
	if(b==0){
		printf("0");
	}
	else{
	int tong = a + b ;	
	int hieu = a - b ;
	int tich = a * b ;
	float chia = a / b;
	int chiaDu = a % b;
	printf("%d %d %d %.2f %d",a+b,a-b,a*b,a/(b*1.0),a%b);
	}
	return 0;
}
