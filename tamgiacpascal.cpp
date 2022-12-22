#include<stdio.h>
int giai_thua(int n){
	if(n==0) return 1;
	return n*giai_thua(n-1);
}
int main(){
	int a;
	scanf("%d",&a);
	for(int n=0;n<a;n++){
		for(int k=0;k<=n;k++){
			printf("%d ",(giai_thua(n))/(giai_thua(k)*giai_thua(n-k)));
		}
		printf("\n");
	}
}
