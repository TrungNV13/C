#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool check(int n){
	int chan=0;
	int le=0;
	while(n>0){
		if((n%10)%2==0) chan++;
		else le++;
		n/=10;
	}
	if(chan==le) return true;
	else return false;
}
int main(){
	int n;
	scanf("%d",&n);
	int k=pow(10,n-1);
	int l=pow(10,n);
	int dem=0;
	for(int i=k;i<l;i++){
		if(check(i)==true) {
			printf("%d ",i);
			++dem;
		}
		if(dem==10){
			printf("\n");
			dem=0;
		}
	}
}
