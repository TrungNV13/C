#include<stdio.h>
int fiBo(int n){
	if(n==1 || n==0){
		return n;
	}
	else{
		return fiBo(n-1)+fiBo(n-2);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d ",fiBo(i));
	}
}
