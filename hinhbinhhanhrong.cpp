#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n;i>=1;i--){
		for(int j=1;j<i;j++){
			printf("~");
		}
		for(int j=1;j<=n;j++){
			if(i==1 || i==n) printf("*");
			else{
				if(j==1 || j==n) printf("*");
				else{
					printf(".");
				}	
			}
		}
		printf("\n");
	}
}
