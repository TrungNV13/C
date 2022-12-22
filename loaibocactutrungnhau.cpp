#include<stdio.h>
#include<string.h>
#define max 1000
int main(){
	char s[max];
	fgets(s,max,stdin);
	
	fputs(s,stdout);
}
