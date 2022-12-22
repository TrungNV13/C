#include<stdio.h>
int n;
int a[100],b[100];
void nhap(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void sap_xep(){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	
}
void chan_le(){
	for(int i=0;i<n;i++){
		if(a[i]%2==0) b[i]=2;
		else b[i]=1;
	}
	for(int i=0;i<n;i++){
		if(b[i]==2) printf("%d ",a[i]);
	}
	for(int i=0;i<n;i++){
		if(b[i]==1) printf("%d ",a[i]);
	}
}
int main(){
	nhap();
	sap_xep();
	chan_le();
}
