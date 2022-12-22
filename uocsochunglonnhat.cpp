#include<stdio.h>
int uoc_max(int a,int b){
	if(a<b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	int r=1;
	while(r!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		printf("%d\n",uoc_max(a,b));
	}
}
