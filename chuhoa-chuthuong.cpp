#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		getchar();
		char kitu;
		scanf("%c",&kitu);		
		if('a'<=kitu && kitu<='z'){
			printf("\n%c",kitu-32);
		}
		else{
			printf("\n%c",kitu+32);
		}		
	}
}
