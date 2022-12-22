#include<stdio.h>
#include<math.h>
int tong(int n){
	int dem=0;
	while(n>0){
		dem+=n%10;
		n/=10;
	}
	return dem;
}
int fibo(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return (fibo(n-1) + fibo(n-2));
	}
}
int soNguyenTo(int n){
	if(n==0 || n==1){
		return -1;
	}
	int dem=0;		
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			++dem;
		}
	}
	if(dem==0){
		return n;
	}
	else{
		return 0;
	}
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int tmp=0;
	if(a>b){
		int c=a;
		a=b;
		b=c;
	}
		for(int  i=a;i<=b;i++){
			for(int j=0;j<=b;j++){
				if( tong(i) == fibo(j) ){
					tmp=1;
					break;
				}
				else if(fibo(j)>b){
					break;
				}
			}
			if( tmp==1 ){
				if(i==soNguyenTo(i)){
					printf("%d ",i);
				}
			}			
			tmp-=tmp;
		}
}

