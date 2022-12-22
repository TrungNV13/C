#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);	
	if(a==0){
		if(b!=0  ){
			float x=-c/b;
			printf("%.2f",x);
		}	
		 if(b==0 && c!=0){
			printf("NO");
		}
		if(b==0&& c==0){
			printf("NO");
		}
		}
	if(a!=0){
		float delTa=(b*b)-(4*a*c);
		if(delTa<0){
			printf("NO");
		}
		if(delTa==0){
			float x=-b/2*a;
			printf("%.2f",x);
		}
		if(delTa>0){
			float x1=(-b+sqrt(delTa))/(2*a);
			float x2=(-b-sqrt(delTa))/(2*a);
			printf("%.2f %.2f",x1,x2);
		}
	}
	return 0;
}
