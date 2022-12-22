#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d ",&t);
	while(t--){
		char a[100];
		gets(a);
		int l=strlen(a);
		long long tmp=0;
		int test=0;
		for(int i=0;i<l;i++){
			a[i]-='0';
			if(a[i]!=0 && a[i]!=1 &&a[i]!=8 && a[i]!=9){
				test=1;
				break;
			}
			else if(a[i]==8 || a[i]==9){
				a[i]=0;
			}
			tmp=tmp*10 +a[i];
		}
		
		if(tmp==0 || test==1)  printf("INVALID");
		else printf("%lld",tmp);
		printf("\n");
	}
}
