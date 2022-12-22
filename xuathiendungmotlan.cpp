#include<stdio.h>
int n;
int a[100];
int b[100];
int c[100];
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
void dem(){
	int tmp=0;
	for(int i=0;i<n;i++){
		int dem=1;
		if(c[i]){
			c[i]=0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					++dem;
					c[j]=0;
				}
			}
			if(dem==1) ++tmp;
		}
	}
	printf("%d\n",tmp);
	for(int i=0;i<n;i++){
		int dem=1;
		if(b[i]){
			b[i]=0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					++dem;
					b[j]=0;
				}
			}
			if(dem==1) printf("%d ",a[i]);
		}
	}
}
int main(){
	nhap();
	dem();
}
