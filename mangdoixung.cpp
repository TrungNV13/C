	#include<stdio.h>
	void test(int t,int n,int a[],int b[]){
		scanf("%d",&t);
		while(t--){
			int dem1=0;
			int dem2=0;
			scanf("%d",&n);
			for(int i=0;i<n;i++){
				scanf("%d",&a[i]);
			}
			if(n%2==0){
				for(int i=0;i<n/2;i++){
					dem1+= dem1*10 + a[i];
				}
				for(int i=n-1;i>=n/2;i--){
					dem2+= dem2*10 + a[i];
				}
			}
			if(n%2!=0){
				for(int i=0;i<n/2;i++){
					dem1+= dem1*10 + a[i];
				}
				for(int i=n-1;i>n/2;i--){
					dem2+= dem2*10 + a[i];
				}
			}
			if (dem1==dem2) printf("YES\n");
			else{
				printf("NO\n");
			}
			
		}
	}
	int main(){
		int t,n;
		int a[100];
		int b[100];
		test(t,n,a,b);
		return 0;
	}

