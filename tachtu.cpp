#include<stdio.h>
#include<string.h>
int main(){
	
	char str[500];
	fgets(str,500,stdin);
	str[strlen(str)-1]=32;
	
	char *p=strtok(str," ");
	while(p!=NULL){
		printf("%s\n",p);
		p=strtok(NULL," ");
	}
}
