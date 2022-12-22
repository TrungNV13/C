#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int k=n;
		for(int j=0;j<2*n-1;j++){
			if(j<i) printf("%d",k--);
			else if(j<2*n-2-i) printf("%d",k);
			else printf("%d",k++);
		}
		printf("\n");
	}
	for(int i=n-2;i>=0;i--){
		int k=n;
		for(int j=0;j<2*n-1;j++){
			if(j<i) printf("%d",k--);
			else if(j<2*n-2-i) printf("%d",k);
			else printf("%d",k++);
		}
		printf("\n");
	}
}
