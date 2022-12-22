#include<stdio.h>
int chan(int a){
	if(a%2==0) return 1;
	return 0;
}
int main(){
	int t,n;
	int a[100];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			if(chan(a[i])) printf("%d ",a[i]);
		}
		printf("\n");
	}
}

