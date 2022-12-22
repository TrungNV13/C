#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		getchar();
		long long n;
		scanf("%lld",&n);
		long long chusocuoi=n%10;
		long long chusodau;
		while(n){
			chusodau=n%10;
			n/=10;			
		}
		if(chusodau==chusocuoi){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
