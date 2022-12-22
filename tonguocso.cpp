#include<stdio.h>
#include<math.h>
int main (){
    long long t;
    long long tmp=0;
    scanf("%lld",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        for( long long  i=2 ; i <= sqrt(n); i++ ){    	
            while( n%i==0 ){
                tmp+=i;             
                n/=i;     
            }       
        }
        if(n>1){  	
        	tmp+=n;
		}
    }
    printf("%lld\n",tmp);
}
