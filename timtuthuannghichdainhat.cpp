#include<stdio.h>
#include<string.h>
int ktra(char a[]){
	int l=strlen(a);
	for(int i=0;i<l/2;i++){
		if(a[i]!=a[l-1-i]) return 0;
	}
	return 1;
}
struct chuoi{
	char xau[101];
};
int main(){
	struct chuoi s[8000];
	scanf(" ");
	int n=0;
		while(scanf("%s",s[n].xau)==1) {
		n++; 
	}
	int max=0;
	for(int i=0;i<n;i++){
		int l=strlen(s[i].xau);
		if(l>max && ktra(s[i].xau) )max=l;
	}
	for(int i=0;i<n;i++){
		int kt=0,dem=1;
		int l=strlen(s[i].xau);
		if(l==max && ktra(s[i].xau)==1){
		for(int j=0;j<i;j++){
			if(strcmp(s[i].xau,s[j].xau)==0){
				kt=1;
				break;
			}
		}
		if(kt==0){
			for(int j=i+1;j<n;j++){
				if(strcmp(s[i].xau,s[j].xau)==0) dem++;
			}
			printf("%s %d\n",s[i].xau,dem);
		}
	}
}
}
