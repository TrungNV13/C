#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<=b){
		for(int i=b;i>=b-a+1;i--){
			for (int j=i;j>=1;j--) printf("%d",j);
			for (int j=2;j<=b+1-i;j++) printf("%d",j);
			printf("\n");
		}
	}
	if(a>b){
		for(int i=a;i>=1;i--){
			if(i>=b){
				int dem=0;
				for(int j=i;j>=1;j--){
					printf("%d",j);
					++dem;
					if(dem==b) break;
				}
				printf("\n");
			}
			if(i<b){
				for(int j=i;j>=1;j--) printf("%d",j);
				for(int j=2;j<=b+1-i;j++) printf("%d",j);
				printf("\n");
			}
		}
	}
}
