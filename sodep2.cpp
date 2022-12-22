#include<stdio.h>
int main(){
	int a[8]={1,9,18,90,180,900,1800,9000};
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",a[n-2]);
	}	
}


