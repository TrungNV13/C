#include<stdio.h>
int fibonacci(int n){
    if(n==1 || n==2) return n;
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        fibonacci(n);
    }
    return 0;
}