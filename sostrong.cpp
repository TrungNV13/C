#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int tmp=1;
	int k=n;
	int tmc=0;	
	while(n>0){				
		int dem=n%10;
		for(int i=1;i<=dem;i++){		
		tmp*=i;		
		}
		tmc+=tmp;	
		tmp/=tmp;	
		n/=10;
	}	
	if(k==tmc){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
}
