#include<stdio.h>
#include<string.h>
main(){
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char a[500];
		gets(a);
		int d=1;
		int n=strlen(a)-1;
		//printf("%d",n);
		if(n%2!=0)
		{
			for(int i=0;i<=n/2;i++)if(a[i]!=a[n-i])d--;
			//printf("%d 1",d);
			if(d<0)printf("NO\n");
			else if(d==0)printf("YES\n");
			else printf("NO\n");
		}
		else 
		{
			for(int i=0;i<=n/2-1;i++)if(a[i]!=a[n-i])d--;
			//	printf("%d 2",d);
			if(d<0)printf("NO\n");
			else printf("YES\n");
		}
}
}
