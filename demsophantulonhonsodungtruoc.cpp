#include<stdio.h>
int a[50];
int n;
void test(){
	int dem=0;
	for(int i=0;i<n;i++){
		int dem1=0;
		if(i==0) ++dem;
		else{
			for(int j=i-1;j>=0;j--){
				if(a[i]<a[j]){					
					++dem1;
				}
			}
			if(dem1==0) ++dem;
		}
	}
	printf("%d",dem);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		test();
		printf("\n");
	}
}
