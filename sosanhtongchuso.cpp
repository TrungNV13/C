#include<stdio.h>
void kiemTra(int a,int b){
	int A=a;
	int B=b;
	int demA=0;
	int demB=0;
	while(a>0){
		demA+=a%10;
		a/=10;
	}
	while(b>0){
		demB+=b%10;
		b/=10;
	}
	if(demA>demB){
		printf("%d %d",B,A);
	}
	else{
		printf("%d %d",A,B);
	}
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	kiemTra(a,b);
	return 0;
}
