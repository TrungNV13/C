#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		int b[100][100]={};
		int a[100][100]={};
		int c[100][100]={};
		int n,m;
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
				b[j][i]=a[i][j];
			}
		}
		printf("Test %d:\n",q);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				for(int k=0;k<m;k++){
					c[i][j]+= a[i][k]*b[k][j];
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
}
