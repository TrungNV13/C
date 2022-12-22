#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	char s1[100][100]={},s2[100][100]={};
	int i=0,j=0,n=0,m=0;
	gets(a);
	gets(b);
	for(int k=0;k<strlen(a);k++){
		if(a[k]==32 && a[k+1]==32 ) continue;
		else if(a[k]!=32){
			s1[n][m]=a[k];
			m++;
		}
		else if(a[k]==32 && a[k+1]!=32){
			m=0;
			n++;
		}
	}
	for(int k=0;k<strlen(b);k++){
		if(b[k]==32 && b[k+1]==32 ) continue;
		else if(b[k]!=32){
			s2[i][j]=b[k];
			j++;
		}
		else if(b[k]==32 && b[k+1]!=32){
			j=0;
			i++;
		}
	}
	for(int k=0;k<=n;k++){
		for(int h=0;h<=n;h++){
			if(strcmp(s1[k],s1[h])<0){
				char tmp[100][100];
				strcpy(tmp[0],s1[k]);
				strcpy(s1[k],s1[h]);
				strcpy(s1[h],tmp[0]);
			}
		}
	}
	for(int k=0;k<=n;k++){
		int dem=0;
		for(int l=0;l<k;l++){
			if(strcmp(s1[k],s1[l])==0) ++dem;
		}
		for(int l=0;l<=i;l++){
			if(strcmp(s1[k],s2[l])==0) ++dem;
		}
		if(dem==0) printf("%s ",s1[k]);
	}
}
