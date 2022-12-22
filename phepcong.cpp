#include<stdio.h>
int main(){
	int a,b,c;
	char dauCong,dauBang,cach,cach1,cach2,cach3;
	scanf("%d",&a);
	scanf("%c",&cach);
	scanf("%c",&dauCong);
	scanf("%c",&cach1);
	scanf("%d",&b); 
	scanf("%c",&cach2);
	scanf("%c",&dauBang);
	scanf("%c",&cach3);
	scanf("%d",&c);
	int sum = a + b;
	if(a<10 &&b<10 && c<10){
		if(sum == c ){
		printf("YES");
		}
		if(sum != c){
		printf("NO");
		}
	}
	return 0;
}
