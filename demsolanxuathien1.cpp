#include<stdio.h>
int a[1000];
int b[1000];
int n;
void nhap(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=1;
	}
}
void dem(){
	
	for(int i=0;i<n;i++){
		int tmp=1;
		if(b[i]){
			b[i]=0;
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					++tmp;
					b[j]=0;
				}
			}
		 	printf("%d %d\n",a[i],tmp);	
		}
	}
}
int main(){
	nhap();
	dem();
}
