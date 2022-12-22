#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int c[1000000],d[1000000];
bool test(int n){
	if(n==0 || n==1 ) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
bool check(int n){
	if(n==0 || n==1 ) return false;
	while(n){
		int tmp=n%10;
		if(test(tmp)== false) return false;
		n/=10;
	}
	return true;
}
void nguyen_to(int a,int b){
	int dem=0;
	for(int i=0;i<=b;i++){
		c[i]=i;
	}
	for(int i=0;i<=b;i++){
		d[i]=1;
	}
	for(int i=0;i<=b;i++){
		if(d[i]){
			if(i==1 || i==0){
				d[i]=0;
				continue;
			}
			for(int j=2*i;j<=b;j+=i){
				d[j]=0;
			}
		}
	}
	for(int i=a;i<=b;i++){
		if(d[i]==1) {
			if(check(c[i])) ++dem;
		}
	}
	printf("%d",dem);
}
int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		nguyen_to(a,b);
		printf("\n");
	}
}
