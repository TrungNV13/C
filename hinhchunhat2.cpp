#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<=b){
		for(int i=1;i<=a;i++){
			for(int j=i;j<=b;j++) printf("%d",j);
			for(int j=b-1;j>=b+1-i;j--) printf("%d",j);
			printf("\n");
		}
	}
	if(a>b){
		for(int i=1;i<=a;i++){
			if(i<=b){
				for(int j=i;j<=b;j++) printf("%d",j);
				for(int j=b-1;j>=b+1-i;j--) printf("%d",j);
				printf("\n");
			}
			if(i>b){
				int dem=0;
				for(int j=i;j>=0;j--){
					printf("%d",j);
					++dem;
					if(dem==b) break;
				}
				printf("\n");
		 	}
		}
	}
}
