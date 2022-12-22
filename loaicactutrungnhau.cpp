#include<stdio.h>
#include<string.h>
int main(){
	char str[100],a[100][100]={};
	gets(str);
	int i=0,j=0;
	for(int k=0;k<strlen(str);k++){
		if(str[k]==32 && str[k+1]==32 ) continue;
		else if(str[k]!=32){
			a[i][j]=str[k];
			j++;
		}
		else if(str[k]==32 && str[k+1]!=32){
			j=0;
			i++;
		}
	}
	for(int k=0;k<=i;k++){
		int dem=0;
		for(int l=0;l<=i;l++){
			if(strcmp(a[k],a[l]) == 0){
				if( l>=k ) dem++;
				else break;
			}
		}
		if(dem>0) printf("%s ",a[k]);
	}
}
