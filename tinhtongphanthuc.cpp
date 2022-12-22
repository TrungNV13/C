#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double S=0;
	for(int i=1 ; i<=n ; i++){
		 S+=1/(i*1.0);
		}
	printf("%.4lf",S);
	return 0;
}
