#include<stdio.h>

void nhap_mang(int c[50][50],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&c[i][j]);
		}
	}
}
void xuat_mang(int c[50][50],int m,int n,int a,int b){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==a-1){
				int tmp=c[i][a-1];
				c[i][a-1]=c[i][b-1];
				c[i][b-1]=tmp;
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int m,n,c[50][50],a,b;
	scanf("%d %d",&m,&n);
	nhap_mang(c,m,n);
	scanf("%d %d",&a,&b );
	xuat_mang(c,m,n,a,b);
}

