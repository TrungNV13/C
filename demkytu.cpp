#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	fgets(str,100,stdin);
	int dem_chu=0;
	int dem_so=0;
	int dem_khac=0;
	for(int i=0;i<strlen(str);i++){
		if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)) ++dem_chu;
		else if(str[i]>=48 && str[i]<=57) ++dem_so;
		else{
			++dem_khac;
		}
	}
	printf("%d %d %d",dem_chu,dem_so,dem_khac-1);
}
