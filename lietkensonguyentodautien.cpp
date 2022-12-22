#include<stdio.h>
#include<math.h>
int prime(int n){
	if(n==1 || n== 0 ) return 0;
	for(int j=2;j<=sqrt(n);j++){
		if(n%j==0) return 0;
	}	
	return 1;
}
int main(){
	int n;
	int dem=0;
	scanf("%d",&n);
	for(int i=2;;i++){
		if(prime(i)){
			++dem;
			printf("%d\n",i);
		}
		if(dem==n) break;
	}
}
