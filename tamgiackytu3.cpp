#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int m=n-1;
		int k=i;
		for(int j=1;j<=2*i-1;j++){
			if(j%2==0){
				printf(" ");
			}
			if(j==1) printf("%c",k+64);
			if(j!=1 && j%2!=0){
				printf("%c",k+m+64);
				k=(k+m);
				m--;
			}
		}
		printf("\n");
	}
}
