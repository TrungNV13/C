#include<stdio.h>
int main(){
	int t,n;
	int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	scanf("%d",&t);
	while(t--){
		int dem=0;
		scanf("%d",&n);
		for(int i=9;i>=0;i--){
			while(n>=a[i]) {
				n-=a[i];
				++dem;
			}
			if(n==0) break;
		}
		printf("%d\n",dem);
	}
}
