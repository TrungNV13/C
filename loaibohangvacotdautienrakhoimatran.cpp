#include<stdio.h>
int main(){
	int a[10][10],b[10][10];
	int t,n,m;
	scanf("%d",&t);
	for(int o=1;o<=t;o++){
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				b[i][j]=1;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i==0 || j==0) b[i][j]=0;
				else break;
			}
		}
		printf("Test %d:\n",o);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(b[i][j]>0) printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}
