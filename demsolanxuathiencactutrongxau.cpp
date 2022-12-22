#include<stdio.h>
#include<string.h>
int main(){
	char str[100],a[100][100];
	int n=0,m=0;
	gets(str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]>='A' && str[i]<='Z') str[i]+=32;
	}
	for(int i=0;i<strlen(str);i++){
		if(str[i]==' ' && str[i+1]==' ') continue;
		else if(str[i]!=' '){
			a[n][m]=str[i];
			m++;
		}
		else if(str[i]==' ' && str[i+1]!=' '){
			m=0;
			n++;
		}
	}
	int b[100];
	for(int i=0;i<=n;i++){
		b[i]=1;
	}
	for(int i=0;i<=n;i++){
		if(b[i]){
			b[i]=0;
			int dem=1;
			for(int j=i+1;j<=n;j++){
				if(strcmp(a[i],a[j])==0){
					b[j]=0;
					dem++;
				}
			}
			printf("%s %d\n",a[i],dem);
		}
	}
}
