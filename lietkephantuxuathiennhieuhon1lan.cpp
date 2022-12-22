#include<stdio.h>
int n;
int a[1000];
int b[1000];
int c[1000];
void nhap(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=1;
	}
	for(int i=0;i<n;i++){
		c[i]=1;
	}
}
void test(){
	int tmc=0;
	for(int i=0;i<n;i++){
		int tmp=1;
		if(c[i]){
			c[i]=0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					++tmp;
					c[j]=0;
				}
			}
		}
		if(tmp>1) ++tmc;
	}
	if(tmc>0) printf("%d\n",tmc);
	for(int i=0;i<n;i++){
		int tmp=1;
		if(b[i]){
			b[i]=0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					++tmp;
					b[j]=0;
				}
			}
			if(tmp>1) printf("%d ",a[i]);
		}
	}
}
int main(){
	nhap();
	test();
	return 0;
}
