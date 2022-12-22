#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int a[t];
	for(int i=0;i<=t;i++){
		a[i]=0;
	}
	int n,m;
	for(int i=0;i<t-1;i++){
		scanf("%d %d",&n,&m);
		a[n]++;
		a[m]++;
	}
	int tmp=0;
	for(int i=1;i<=t;i++){
		if(a[i]==t-1){
			tmp=1;
			printf("Yes");
			break;
		}
	}
	if(tmp==0) printf("No");
}
