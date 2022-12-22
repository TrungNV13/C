#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int dem=0;
		if(i%2==0){
			for(int j=2;j<=2*n;j+=2){
				printf("%d",j);
				++dem;
				if(dem==i) break;
			}
		}
		else{
			for(int j=1;j<2*n;j+=2){
				printf("%d",j);
				++dem;
				if(dem==i) break;
			}
		}
		printf("\n");
	}
}
