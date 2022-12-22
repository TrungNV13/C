#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool tang(int n){
	int tmp=n%10;
	n/=10;
	while(n){
		int tmc=n%10;
		if(tmp<tmc) return false;
		tmp=tmc;
		n/=10;
	}
	return true;
}
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=pow(10,n-1);i<pow(10,n);i++){
			if(tang(i)) printf("%d ",i);
		}
		printf("\n");
	}
}
