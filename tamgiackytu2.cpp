#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n-1;i>=0;i--){
		int dem=-1;
		for(int j=i;j<n+n;j++){
			printf("%c",j+64);
			++dem;
			if(dem==i) break;
		}
		printf("\n");
	}
}
// 45678
// 3456
// 234
// 12
// 0
