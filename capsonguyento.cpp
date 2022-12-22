#include<stdio.h>

void nguyen_to(int n,int a[10000],int b[10000]){
	for(int i=0;i<n;i++){
		a[i]=i;
	}
	for(int i=0;i<n;i++){
		b[i]=1;
	}
	for(int i=0;i<n;i++){
		if(i==0 || i==1 ) b[i]=0;
		if(b[i]){
		for(int j=2*i;j<n;j+=i){
			b[j]=0;
		}}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	int a[10000],b[10000];
	while(t--){
		int n;
		scanf("%d",&n);
		nguyen_to(n,a,b);
		for(int i=0;i<n;i++){
			if(b[i]){
				for(int j=i;j<n;j++){
					if(b[j]){
						if(a[i]+a[j]==n) printf("%d %d ",a[i],a[j]);
					}
				}
			}
		}
		printf("\n");
	}
}
