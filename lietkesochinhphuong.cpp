#include<stdio.h>
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	if(a<b){
		int dem =0;
		for( long long i=0 ; i<=b; i++){						
			if(i*i>=a && i*i<=b){
				++dem;					
			}
			if(i*i>b){
				break;
			}											
		}	
		printf("%d\n",dem);	
			for( long long i=0 ; i<=b; i++){						
			if(i*i>=a && i*i<=b){
				printf("%lld\n",i*i);				
			}
			if(i*i>b){
				break;
			}														
		}
	}
}
