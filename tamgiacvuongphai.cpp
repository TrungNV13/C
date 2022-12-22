#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);	
	int b=a;
	for(int i=a;i>=1;i--){
		for(int j=i;j>1;j--) printf("~");
		for(int k=1;k<=a+1-i;k++) printf("*");					
		printf("\n");
	}
}
