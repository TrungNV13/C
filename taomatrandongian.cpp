#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[100][100];
	for(int i=0;i<n;i++){
		int k=0;
		for(int j=0;j<n;j++){
			if(j>=i) a[i][j]=k++;
			else a[i][j]=0;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
