#include<stdio.h>
int main(){
	int n,a[100];
	int dem=0;
	int tmp=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			++dem;
			tmp+=a[i];
		}
		printf("%.3f",tmp/(dem*1.0));

}
