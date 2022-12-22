#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d", &a, &b ); 
	for(int i=1 ; i<=b ; i++){
		for(int j=1 ; j<=a ; j++){
			if(i==1){
				printf("*");
			}
			if(i==b){
				printf("*");
			}
			if(i>1 && i<b){
				if(j-1==0 || j-a==0){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}

