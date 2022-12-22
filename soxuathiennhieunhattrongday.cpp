#include<stdio.h>

int b[100];
void nhap_mang(int a[100],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=1;
	}
}

void xuat_mang(int a[100],int n){
	int k;		
	int dem=0;
	for(int i=0;i<n;i++){
		int dem1=1;
		if(b[i]){
			b[i]=0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					++dem1;
					b[j]=0;
				}
			} 
			if(dem1>dem){
				dem=dem1;
				k=a[i];
			}
		}
	}
}
int main(){
	int t,n,a[100];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		nhap_mang(a,n);
		xuat_mang(a,n);
		printf("\n");
	}
}
