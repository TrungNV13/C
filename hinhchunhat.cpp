#include<stdio.h>
int main(){
	int a,b;
	scanf("%d" , & a );
	scanf("%d", &b );
	if(a<=0 || b<=0){
		printf("0");
	}
	else{
	int chuVi=(a+b)*2;
	int dienTich=a*b;
	printf("%d %d",chuVi,dienTich);
	}
	return 0;
}
