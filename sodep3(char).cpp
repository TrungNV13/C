#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
bool nguyen_to(char str[]){
	int n=strlen(str)-1;
	for(int i=0;i<n;i++){
		str[i]=str[i] -48;
		if(str[i]==0 || str[i]==1) return false;
		for(int j=2;j<=(int) sqrt(str[i]);j++){
			if(str[i]%j==0) return false;
		}
	}
	return true;
}
bool thuan_nghich(char str[]){
	int n=strlen(str)-1;
	for(int i=n-1;i>=(n/2);i--){
		if((int) str[i]!=(int )str[n-i-1]) return false;
	}
	return true;
}
int main(){
	int t;
	scanf("%d ",&t);
	while(t--){
	char str[500];
	fgets(str,500,stdin);
	if( nguyen_to(str) && thuan_nghich( str)) printf("YES\n");
	else printf("NO\n");
// if(nguyen_to(str)) printf("YES\n");
// else printf("NO\n");

 }
}
