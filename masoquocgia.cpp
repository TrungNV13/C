#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d ",&t);
	while(t--){
		char a[100];
		gets(a);
		int l=strlen(a);
		for(int i=0;i<l;i++){
			a[i]-='0';
		}
		for(int i=0;i<l;i++){
			if(a[i]==0 && a[i+1]==8 && a[i+2]==4){
				for(int j=i+3;j<l;j++) printf("%d",a[j]);
				break;
			}
			else printf("%d",a[i]);
		}
		printf("\n");
	}
}
