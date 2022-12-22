#include<stdio.h>
#include<math.h>
int so_nguyen_to(int a){
	if(a<2) return 0;
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0) return 0;
		return 1;
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
			if(so_nguyen_to(a[i])) printf("%d ",a[i]);
		}
		printf("\n");
	}
}
