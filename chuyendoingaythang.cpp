#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);	  		
	if(n%365==0){
		float nam=n/365;
		printf("%.0f 0 0",nam);
	}
	if(n%365!=0 && n<365 &&n>=7 &&n%7==0 ){
		float tuan=n/7;
		printf("0 %.0f 0", tuan);
	}	
	if( n<7){
		printf("0 0 %d",n);
	}
	if(n%365!=0 && n>365){
		int ngayDu=n%365;
		int nam=(n-ngayDu)/365;
		if(ngayDu<7){
			printf("%d 0 %d",nam,ngayDu);
		}
		if(ngayDu>=7 && ngayDu%7==0){
			int tuan=ngayDu/7;
			printf("%d %d 0",nam,tuan);
		}
		if(ngayDu>=7 && ngayDu%7!=0){
			int ngayDu1=ngayDu%7;
			int tuan1=(ngayDu - ngayDu1)/7;
			printf("%d %d %d",nam,tuan1,ngayDu1);
		}
	}
}
