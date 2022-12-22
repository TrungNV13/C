#include<stdio.h>
#include<string.h>
int check(char a[]){
	int l=strlen(a);
	int b=1,c=l-2;
	while(b<c){
		if(a[b]!=a[c]) return 0;
		b++;c--;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d ",&t);
	while(t--){
		char a[100];
		gets(a);
		int k=a[0]-'0';
		int l=a[strlen(a)-1]-'0';
		if((check(a) && k==2*l) || check(a) && l==2*k) printf("YES\n");
		else printf("NO\n");
	}
}
