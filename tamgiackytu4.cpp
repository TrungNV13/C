#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<2*n-1;i++){
		if(i%2!=0) printf("\n\n");
		
		else{
			for(int j=0;j<=i;j+=2){
				printf("%c",j+64);
			}
			for(int j=i-2;j>=0;j-=2){
				printf("%c",j+64);
			}
		}
	}
}
