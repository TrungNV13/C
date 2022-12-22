#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d ",&t);
	while(t--){
		char str[500];
		fgets(str,500,stdin);
		str[strlen(str)-1]=32;
		int dem=0;
		char *p=strtok(str," ");
		while(p!=NULL){
			dem++;
			p=strtok(NULL," ");
		}
		printf("%d\n",dem);
	}
}
