#include<stdio.h>
int n;
int a[100];
int b[100];
void nhap(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=1;
	}
}
void test(){
	for(int i=0;i<n;i++){
		int dem=1;
		if(b[i]){
			b[i]=0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]) {
					b[j]=0;
					++dem;
				}
			}
			printf("%d xuat hien %d lan\n",a[i],dem);
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		nhap();
		printf("Test %d:\n",i);
		test();
	}
}
