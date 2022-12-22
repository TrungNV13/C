#include<stdio.h>
#include<math.h>
int thuan_nghich(int n){
	int m=n;
	int dem=0;
	while(n>0){
		dem=dem*10 + n%10;
		n/=10;
	}
	if(dem == m) return 1;
	else return 0;
}
int nguyen_to(int n){
	if(n==1 || n== 0) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		if(a>b){
		int tmp=a;
		a=b;
		b=tmp;
		}
		int dem=0;
		for(int i=a;i<=b;i++){
			if(thuan_nghich(i) && nguyen_to(i) ) {
				printf("%d ",i);
				++dem;
				if(dem==10){
					printf("\n");
					dem=0;
				}
			}
		}
		printf("\n\n");
	}
}
