#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int k=1;
	for(int i=1;i<=n;i++){
		int m;
		if(i%2==0){
			m=k+i;
			k=m+1;
		}
		for(int j=1;j<=2*i-1;j++){
			if(j%2==0) printf(" ");
			else{
				if(i%2!=0) {
						printf("%d",k);
						if(j!=2*i-1) k++;
				}	
				else{
					printf("%d",m);
					m--;
				}
			}
		}
		printf("\n");
	}
}
