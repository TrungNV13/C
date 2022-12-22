#include<stdio.h>
void  kiemTra(long long a){
	int dem=0;
	while(a>0){
		dem+=a%10;
		a/=10;
	}
	if(dem%10==0){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		kiemTra(n);
		printf("\n");
	}
}
