#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<=b){
		for(int i=a;i>=1;i--){
			for(int j=i;j<=b;j++){
				printf("%c",j+64);
			}
			for(int j=i-1;j>=1;j--){
				printf("%c",b+64);
			}
			printf("\n");
		}
	}
	else{
		for(int i=a;i>=1;i--){
			if(i>b){
				for(int j=1;j<=b;j++){
					printf("%c",b+64);
				}
				printf("\n");
			}
			else{
				for(int j=i;j<=b;j++){
					printf("%c",j+64);
				}
				for(int j=i-1;j>=1;j--){
					printf("%c",b+64);
				}
				printf("\n");
			}
		}
	}	
}
// 4444 34555 333
// 3444	23455 333
// 2344	12345 333
// 1234 	  233
// 			  123
