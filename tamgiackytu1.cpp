#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n+n;i+=2){
		for(int j=i;j<n+n;j+=2){
			printf("%c",j+65);
		}
		printf("\n");
	}
}
