#include<stdio.h>
#include<math.h>
int main(){
	int n,soDau,soCuoi,dem=0;	
	scanf("%d",&n);
	int tmp=n;
	int u=tmp;
	soCuoi=n%10;
	while(n){
		soDau=n%10;
		n/=10;	
	}
	while(tmp){
		tmp/=10;
		++dem;
	}
	int cacSoConLai=((u-(soDau*pow(10,(dem-1)))))/10;
	if(soCuoi==0){
		printf("%d%d",cacSoConLai,soDau);
	}
	else{
		printf("%d%d%d",soCuoi,cacSoConLai,soDau);
	}
	
	
}
