#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a==b){
	for(int i=a;i>=1;i--){
		for(int j=b;j>=i;j--){
			printf("%c",j+96);
		}
		for(int j=1 ;j<=i-1 ;j++){
			printf("%c",i+96);
		}
		printf("\n");
	}}
	if(a<b){
		for(int i=b;i>b-a;i--){
			for(int j=b;j>=i;j--){
				printf("%c",j+96);
			}
			for(int j=1;j<=i-1;j++){
				printf("%c",i+96);
			}
			printf("\n");
		}
	}
	if(a>b){
		for(int i=a;i>=1;i--){
			if(i>a-b){
				for(int j=a;j>=i;j--){
					printf("%c",j+96);
				}
				for(int j=a-b;j<i-1;j++){
					printf("%c",i+96);
				}
				printf("\n");
			}
			else{
				for(int j=a;j>a-b;j--){
					printf("%c",j+96);
				}
				printf("\n");
			}
		}
	}
}
// 55555 666666 6666
// 54444 655555 6555
// 54333 654444 6544
// 54322 654333 6543
// 54321 		6543
// 				6543
