#include<stdio.h>
#include<stdbool.h>
bool check(int n,int a[100]){
	for(int i=1;i<n;i++){
		if(a[0]>a[i]) return false;
	}
	return true;
}
int main(){
	int n;
	int a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		if(check(n,a)) break;
		for(int j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			int tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
		}
		}
		printf("Buoc %d: ",i+1);
		for(int j=0;j<n;j++){
			printf("%d ",a[j]);
		}
		printf("\n\n");
	}
}
