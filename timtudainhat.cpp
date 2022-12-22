#include <stdio.h>
#include<string.h>
#include<math.h>
struct tu{
	char nd[50];
	int solan;
	
};
struct tu ds[1000]; int n = 0;
int tim(char s[]){
	for(int i = 0; i < n; i++){
		if(strcmp(s,ds[i].nd) == 0) return i;
	}
	return -1;
}
int main(){
	char s[50];
	int i;
	while(scanf("%s",&s) != -1){
		int i = tim(s);
		if(i == -1){
			strcpy(ds[n].nd,s);
			ds[n].solan=1;
			n++;
		}
		else{
			ds[i].solan++;
		}
	}
	int max = 0;
	for(i = 0; i < n; i++){
		if(strlen(ds[i].nd) > max){
			max = strlen(ds[i].nd);
		}
	}
	for(i = 0; i < n; i++){
		if(strlen(ds[i].nd) == max){
			printf("%s %d %d\n",ds[i].nd,max,ds[i].solan);
		}
	}
}
