#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	gets(str);
	int dem=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>='A' && str[i]<='Z') str[i]+=32;
	}
	for(int i=0;i<strlen(str);i++){
		if(i==0){
			if(str[0]!=' ') dem++;
		}
		else{
			if(str[i]==' ' && str[i+1]==NULL) continue;
			else if(str[i]==' ' && str[i+1]!=' ') dem++;
		}
	}
	int n=1;
	char *token=strtok(str," ");
	while(token!=NULL){
		if(n<dem)printf("%c",*token);
		else{
			printf("%s",token);
		}
		n++;
		token=strtok(NULL," ");
	}
	printf("@ptit.edu.vn");
}
