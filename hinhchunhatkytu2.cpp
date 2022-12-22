#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<=b){
		for(int i=1;i<=a;i++){
			for(int j=i;j<=b;j++){
				printf("%c",j+64);
			}
			for(int j=i-1;j>0;j--){
				printf("%c",j+64);
			}
			printf("\n");
		}
	}
	if(a>b){
		for(int i=1;i<=a;i++){
			if(i<=b){
				for(int j=i;j<=b;j++){
				printf("%c",j+64);
			}
				for(int j=i-1;j>0;j--){
					printf("%c",j+64);
				}
			printf("\n");
			}
			else{
				for(int j=b;j>=1;j--){
					printf("%c",j+64);
				}
				printf("\n");
			}
		}
	}
}
//1234 12345 123
//2341 23451 231
//3421 34521 321
//4321	     321
// 	 		 321
