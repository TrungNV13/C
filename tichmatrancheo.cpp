#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++){
		int n;
		scanf("%d",&n);
		int a[20][20]={},b[20][20]={},c[20][20]={};
		for(int i=0;i<n;i++){
			int k=1;
			for(int j=0;j<n;j++){
				if(j<=i) a[i][j]=k++;
				else a[i][j]=0;
				b[j][i]=a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				for(int k=0;k<n;k++){
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		printf("Test %d:\n",q);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
}
