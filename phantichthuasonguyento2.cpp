#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[100]={};
	int k=0;
	for(int i=2;i<=n;i++){
		while(n % i == 0){
			if(n){
				if(n%i==0){
					a[k++]=i;
				}
			}
			n/=i;
		}				
	}
	for(int i=k-1;i>=0;i--){
		printf("%d",a[i]);
		if(i!=0) printf("x");
	}
}

