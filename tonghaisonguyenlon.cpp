#include<stdio.h>
#include<string.h>
void add(int d1[],int  d2[],int max)
{

    int r=0;
    int c[505];
    int j=0;
    for(int i=max-1;i>=0;i--)
    {
        int tmp=d1[i]+ d2[i] + r;
        r=tmp/10;
        tmp=tmp%10;
        c[j++]=tmp;
    }
    if(r>0)printf("1");
  	 for(int i=j-1;i>=0;i--)printf("%d",c[i]);
   
}
void tinh(char a[],char b[])
{
	int d1[505],d2[505];
	int l1=strlen(a),l2=strlen(b);
	int max;
	if(l1>l2)max=l1;
	else max=l2;
	int i,j;
	j=0;
	for(i=0;i<max-l1;i++)d1[i]=0;
	for(;i<max;i++)d1[i]=a[j++]-48;
	j=0;
	for(i=0;i<max-l2;i++)d2[i]=0;
	for(;i<max;i++)d2[i]=b[j++]-48;
	add(d1,d2,max);
}

int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
    char a[505],b[505];
    scanf("%s",&a);
    scanf("%s",&b);
    tinh(a,b);
    printf("\n");
	}
}
