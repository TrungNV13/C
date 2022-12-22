#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
if(a<=b){
    for(int i=0;i<a;i++){
        for(int j=i;j<b;j++){
            printf("%c",j+64);
        }
        for(int j=i-1;j>=0;j--){
            printf("%c",b-1+64);
        }
        printf("\n");
    }
}
if(a>b){
	for(int i=0;i<a;i++){
		if(i<b){
			for(int j=i;j<b;j++){
				printf("%c",j+64);
			}
			for(int j=i-1;j>=0;j--){
				printf("%c",b-1+64);
			}
			printf("\n");
		}
		else{
			for(int j=0;j<b;j++){
				printf("%c",b-1+64);
			}
			printf("\n");
		}
	}
}
}
// 0123 01234 012
// 1233 12344 122
// 2333 23444 222
// 3333 34444 222
//            222
//            222
