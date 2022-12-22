#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char s1[100],s2[100],s3[100];
	gets(s1);gets(s2);
	scanf("%d",&n);
		strcpy(s3,s1+n-1);puts(s3);puts(s1);
		strcpy(s1+n-1,s2);puts(s1+n-1);puts(s1);
		strcat(s1,s3);
		puts(s1);
	
}
