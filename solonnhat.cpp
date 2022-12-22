#include<stdio.h>
void max(int n,int a[],int b[],int c[]){
	int tmp;
	for(int i=0;i<n;i++){
		c[i]=a[i];
	}
	for(int i=0;i<n;i++){
		b[i]=1;
	}
	for(int i=0;i<n;i++){
		int tmp;
		for(int j=i+1;j<n;j++){
			if(c[i]<c[j]){
				tmp=c[i];
				c[i]=c[j];
				c[j]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		tmp=c[i];
		break;
	}
	for(int i=0;i<n;i++){	
			if(a[i]<tmp) b[i]=0;
	}
	for(int i=0;i<n;i++){
		if(b[i]>0){
			printf("%d\n",a[i]);
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]>0) printf("%d ",i);
	}
	printf("\n");
}
int main(){
	int t,n;
	int a[100];
	int b[100];
	int c[100];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		max(n,a,b,c);
	}
}
