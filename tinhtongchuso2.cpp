#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
    while(t--){
        int dem=0, n;
        scanf("%d",&n);
        while(n > 0){
            dem += n % 10;
            n /= 10;
        }
        printf("%d\n",dem);
    }
}
