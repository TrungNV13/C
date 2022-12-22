#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[50];
	int t;
	scanf("%d ",&t);
	while(t--){
		char a[100][100]={};
		int n=0;
		gets(s);
		for(int i=0;i<strlen(s);i++){
			if(s[i]>='A' && s[i]<='Z') s[i]+=32;
		}
		char *token=strtok(s," ");
		while(token!=NULL){
			*token=toupper(*token);
			strcpy(a[n++],token);
			token=strtok(NULL," ");
		}
		for(int i=1;i<n;i++){
			if(i==n-1) printf("%s, ",a[i]);
			else printf("%s ",a[i]);
		}
		for(int i=0;i<strlen(a[0]);i++){
			if(a[0][i]>='a' && a[0][i]<='z') a[0][i]-=32;
		}
		printf("%s\n",a[0]);
	}
}
