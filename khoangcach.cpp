#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
 		double  a,b,c,d;
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		double khoang_cach=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		printf("%.4lf\n",khoang_cach);
	}
	return 0;
}
