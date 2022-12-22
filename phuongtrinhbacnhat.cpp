#include<stdio.h>
int main(){
	int a,b;
	scanf ("%d%d",&a,&b);
	float x=-b/(a*1.0);
	if(a==0 && b!=0){
		printf("Vo nghiem");
	}
	else if(a==0 && b==00){
		printf("Vo so nghiem");
	}
	else{
		printf("%.2f",x);
	}
}
