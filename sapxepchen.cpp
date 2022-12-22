#include<stdio.h>
int main(){
	unsigned int  n,a[100];
	scanf("%u",&n);
	for(int i=0;i<n;i++){
		scanf("%u",&a[i]);
	}
	int i, key, j;
	for( i=0;i<n;i++){
		printf("Buoc %d: ",i);
		key = a[i];
        j = i-1;
        while (j >= 0 && a[j] > key){
           a[j+1] = a[j];
           j-=1;
        }
        a[j+1] = key;
			for(int j=0;j<=i;j++){
				printf("%u ",a[j]);
			}
		printf("\n\n");		
	}
}
