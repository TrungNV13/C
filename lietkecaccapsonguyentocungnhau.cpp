#include<stdio.h>
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int uoc_chung_max(int a,int b){
    for(int i=max(a,b);i>0;i--){
        if(a%i==0 && b%i==0) {
            return i;
            break;
        }
    }
}
void nguyen_to_cung_nhau(int a, int b){
    for(int i=min(a,b);i<=max(a,b);i++){
        for(int j=i+1;j<=max(a,b);j++){
            if(uoc_chung_max(i,j)==1) {
                printf("(%d,%d)",i,j);
            printf("\n");
            }
        }
    }
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    nguyen_to_cung_nhau(a,b);
}