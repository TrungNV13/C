#include<stdio.h>
#include<string.h>
char tam(char str[]){
	int n=strlen(str)-1;
	if(str[n-1]==8) return 0;
	
	return 1;
}
char muoi(char str[]){
	int n=strlen(str)-1;
	int tmp=0;
	for(int i=0;i<n;i++){
		tmp+=str[i]-48;
	}
	
	if(tmp%10==0) return 1;
	return 0;
}
int  thuan_nghich(char str[]){
	int n=strlen(str)-1;
	for(int i=n-1;i>=(n/2);i--){
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
	if( tam(str) && muoi(str) && thuan_nghich( str)) printf("YES\n");
	else printf("NO\n");

 }
}
