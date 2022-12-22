#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int t;
	scanf("%d ",&t);
	char s[80];
	while(t--){
	fgets(s,80,stdin);
	int n=strlen(s);
	for(int i=0;i<n;i++){
		if(s[i]>='A' && s[i]<='Z') s[i]+=32;
	}
	char *token=strtok(s," ");
	while(token!=NULL){
		*token=toupper(*token);
		fputs(token,stdout);
		printf(" ");
		token=strtok(NULL," ");
	}
}
}
