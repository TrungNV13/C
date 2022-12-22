#include<stdio.h>
#include<stdbool.h>

bool min(int j,int n,int a[100]){
	for(int i=j+1;i<n;i++){
		if(a[j]>a[i]) return false;
	}
	return true;
}
int main(){
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j] && min(j,n,a)){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
		for(int j=0;j<n;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
}
