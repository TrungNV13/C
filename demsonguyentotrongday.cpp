#include<stdio.h>
#include<math.h>
int a[100];
int b[100];
int n;
int nguyen_to(int m){
	if( m==1 || m==0 ) return 0;
	for(int i=2;i<=sqrt(m);i++){
		if(m%i==0) return 0;
	}
	return 1;
} 
void nhap(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=1;
	}
}
void sap_xep(){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int tmp=0;
			if(a[i]>a[j]){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
void test(){
	for(int i=0;i<n;i++){
		int dem=1;
		if(b[i]){
			b[i]=0;
			if(nguyen_to(a[i])==1){
				for(int j=i+1;j<n;j++){
					if(a[i]==a[j]){
						++dem;
						b[j]=0;
					}
				}
					printf("%d xuat hien %d lan\n",a[i],dem);
			}
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		nhap();
		sap_xep();
		printf("Test %d:\n",i);
		test();
	}
}
