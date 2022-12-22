#include<stdio.h>
int main(){
	int t;
		int n,m;
		scanf("%d %d",&n,&m);
		int a[n][m];
		int sumhang=0,check;
		for(int i=0;i<n;i++){
			int sum=0;
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
				sum+=a[i][j];
			}
			if(sum>sumhang){
				sumhang=sum;
				check=i;
			}
		}
		int tmp,sumcot=0;
		for(int j=0;j<m;j++){
			int sum2=0;
			for(int i=0;i<n;i++){
				if(i==check ) continue;
				sum2+=a[i][j];
			}
			if(sum2>sumcot){
				sumcot=sum2;
				tmp=j;
			}
		} 
		for(int i=0;i<n;i++){
			if(i==check) continue;
			for(int j=0;j<m;j++){
				if(j==tmp) continue;
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	
}
