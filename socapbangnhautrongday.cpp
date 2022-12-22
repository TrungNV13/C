#include<stdio.h>
int a[100],b[100];
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
void lien_nhau(){
	int dem=0;
	for(int i=0;i<n;i++){
		if(b[i]){
			b[i]=0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					++dem;
					b[j]=0;
				}
				else{
					break;
				}
			}
		}
	}
	printf("%d\n",dem);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		nhap();
		lien_nhau();
	}
}
