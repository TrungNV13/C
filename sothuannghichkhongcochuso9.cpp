#include<stdio.h>
int so_9(int n){
	while(n!=0){
		int tmp=n%10;
		n/=10;
		if(tmp==9) return 0;
	}
	return 1;
}
int thuan_nghich(int n){
	int tmp=0;
	int m=n;
	while(n!=0){
		tmp=tmp*10 + n%10;
		n/=10;
	}
	if(tmp==m && so_9(tmp)) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int dem=0;
	for(int i=2;i<n;i++){
		if(thuan_nghich(i)){
			printf("%d ",i);
			++dem;
		}
	}
	printf("\n%d",dem);
}
