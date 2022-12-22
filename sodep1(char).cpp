#include<stdio.h>
#include<string.h>
char chan(char str[]){
	int n=strlen(str)-1;
	for(int i=0;i<n;i++){
		if(((int) str[i])%2!=0) return 0;
	}
	return 1;
}
int  thuan_nghich(char str[]){
	int n=strlen(str)-1;
	for(int i=n-1;i>=(n/2);i--){
//		printf("%c\n",str[i]);
//		printf("%c\n",str[n-i-1]);
//		printf("--\n");
		if((int) str[i]!=(int )str[n-i-1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d ",&t);
	while(t--){
	
	char str[500];
	fgets(str,500,stdin);
	if( chan(str) && thuan_nghich( str)) printf("YES\n");
	else printf("NO\n");
//thuan_nghich(str);
 }
}
