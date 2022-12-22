#include<stdio.h>

#include<string.h>

#define max 100

char XoaTu(char s[],char s1[]){
	int n=strlen(s);
	int n1=strlen(s1);
	int b[n];
	for(int i=0;i<n;i++) b[i]=0;
 	for(int i=0;i<n;i++){
 		if(s[i]==s1[0]){
 			int k=i;
 			for(int j=0;j<n1;j++){
 				if(s[k]!=s1[j]){
				 k=-1;
 				break;
				 }
				 k++;
			 }
			 if(k!=-1){
			 	for(int f=i;f<=n1+i;f++) b[f]=1;
			 }
		 }
	 }
	 for(int i=0;i<n;i++){
	 	if(b[i]==0) printf("%c",s[i]);
	 	}

}

int main(){
 char s[max];
    char s2[max];
    gets(s);
    gets(s2);               
       XoaTu(s,s2);

}

       
