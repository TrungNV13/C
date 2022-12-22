#include<stdio.h>
#include<string.h>
int locPhat(char a[],int n,int m){
	for(int i=n;i<=m;i++){
		if(a[i]=='.') continue;
		if(a[i]!='6'&&a[i]!='8') return 0;
	}
	return 1;
}
int bangNhau(char a[],int n,int m){
	int check=1;
	for(int i=n+1;i<=m;i++){
		if(a[i]=='.'){
			i++;
			continue;
		}
		if(a[i]!=a[i-1]) check=0;
	}
	return check;
}
int sapxep(char a[],int n,int m){
	for(int i=n+1;i<=m;i++){
		if(a[i]=='.') continue;
		if(a[i]<=a[i-1]) return 0;
	}
	return 1;
}
int dep(char a[],int n,int m){
	while(a[n+1]!='.'){
		if(a[n+1]!=a[n]) return 0;
		n++;
	}
	while(n<=m){
		if(a[n+1]!=a[n]) return 0;
		n++;
	}
}
int main(){
	int t;scanf("%d ",&t);
	while(t--){
		char a[100];
		fgets(a,100,stdin);
		int len=strlen(a);
		if(locPhat(a,len-7,len-2)||bangNhau(a,len-7,len-2)||
		sapxep(a,len-7,len-2)||dep(a,len-7,len-2)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
