#include<stdio.h>
#include<math.h>
int soHoanHao(int n){
	int dem=0;
	for(int i=1; i<=sqrt(n);i++){
		if(n%i==0){
			dem+=i;
			if(i>1){
				dem+=n/i;
			}
		}
	}
	if(dem==n){
		return n;
	}
	else{
		return 0;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(soHoanHao(i)){
			printf("%d ",i);
		}
	}
}
