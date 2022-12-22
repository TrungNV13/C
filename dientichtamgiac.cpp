#include <stdio.h>
#include <math.h>
double canh(double x1, double y1, double x2, double y2) {
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int ktra(double AB, double AC, double BC) {
	if(AB>=AC+BC || AC>=AB+BC || BC>=AB+AC) return 0;
	return 1;
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--) {
		double x1, y1, x2, y2, x3, y3;
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
		double AB=canh(x1, y1, x2, y2);
		double AC=canh(x1, y1, x3, y3);
		double BC=canh(x2, y2, x3, y3);
		if(ktra(AB,AC,BC)==1) {double	p=(AC+AB+BC)/2;
		printf("%.2lf\n",sqrt(p*(p-AB)*(p-AC)*(p-BC)));}
		else printf("INVALID\n");
	}
	return 0;
}
