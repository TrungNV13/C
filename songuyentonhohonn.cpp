#include<stdio.h>
int b[1000000];
void prime(int n){
	for(int i=0;i<n;i++){
		if(i==0 || i==1) b[i]=0;
		else{
			b[i]=1;
		}
	}
	
	for(int i=0;i<n;i++){
		if(b[i]){
			for(int j=2*i;j<n;j+=i){
				b[j]=0;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]>0) printf("%d\n",i);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	prime(n);
	return 0;
}
