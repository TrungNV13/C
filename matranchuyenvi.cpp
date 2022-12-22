#include<stdio.h>
int main(){
	int n,m;
	int b[10][10];
	int a[10][10];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[j][i];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
}
