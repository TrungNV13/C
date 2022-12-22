#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=2*n;i+=2){
		for(int j=(2*n-i)/2;j>=1;j--){
			printf("~");
		}
		for(int j=2;j<=i;j+=2){
			printf("%d",j);
		}
		for(int j=i-2;j>=2;j-=2){
			printf("%d",j);
		}
		printf("\n");
	}
}
