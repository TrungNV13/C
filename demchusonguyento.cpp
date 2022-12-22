#include<stdio.h>
int main(){
	long long n;
	int dem2=0;
	int dem3=0;
	int dem5=0;
	int dem7=0;
	scanf("%lld",&n);
	while(n>0){
		int tmp=n%10;
		if(tmp==2){
			++dem2;
		}
		if(tmp==3){
			++dem3;
		}
		if(tmp==5){
			++dem5;
		}
		if(tmp==7){
			++dem7;
		}
		n/=10;
	}
	if(dem2>0){
		printf("2 %d\n",dem2);
	}
	if(dem3>0){
		printf("3 %d\n",dem3);
	}
	if(dem5>0){
		printf("5 %d\n",dem5);
	}
	if(dem7>0){
		printf("7 %d\n",dem7);
	}
}
