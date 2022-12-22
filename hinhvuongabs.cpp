#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a<c && b<d){
		int duong_cheo=(a-c)*(a-c)+(b-d)*(b-d);
		int do_rong=abs(c-a);
		int do_dai=abs(d-b);
		if(do_rong*do_rong == duong_cheo/2 && do_dai*do_dai == duong_cheo/2){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
	return 0;
}
