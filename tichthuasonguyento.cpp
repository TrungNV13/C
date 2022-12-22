#include<stdio.h>
#include<math.h>
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int tmp=1;
		if(n%2==0){
			while(n%2==0){
				n/=2;
			}
			tmp*=2;
		}
		for(int i=3;i<=sqrt(n);i+=2){
			int dem=0;
			while(n%i==0){
				n/=i;
				++dem;
			}
			if(dem>0) tmp*=i;
		}
		if(n>1) tmp*=n;
		printf("%d\n",tmp);
	}
}
