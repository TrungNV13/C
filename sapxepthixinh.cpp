#include<stdio.h>
#include<string.h>
typedef struct{
	int id;
	char name[100];
	char dateOfbirth[100];
	float score[3];
}student;
int main(){
	int n;scanf("%d ",&n);
	student a[n];
	for(int i=0;i<n;i++){
		a[i].id=i+1;
		fgets(a[i].name,100,stdin);
		a[i].name[strlen(a[i].name)-1]='\0';
		fgets(a[i].dateOfbirth,100,stdin);
		a[i].dateOfbirth[strlen(a[i].dateOfbirth)-1]='\0';
		scanf("%f%f%f ",&a[i].score[0],&a[i].score[1],&a[i].score[2]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j].score[0]+a[j].score[1]+a[j].score[2]<
				a[j+1].score[0]+a[j+1].score[1]+a[j+1].score[2]) {
					student tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
				}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d %s %s %.1f\n",a[i].id,a[i].name,a[i].dateOfbirth,a[i].score[0]+a[i].score[1]+a[i].score[2]);
	}
	return 0;
}
