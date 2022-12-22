#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d\n",&T);
	while(T--)
	{
		char s[1005];
		gets(s);
		int b[57]={},i,k=1,h=1;
		for(i=0;i<strlen(s);i++)
			{
				if(s[0]=='0'){h=0;break;}
				else 
				{
				    if(s[i]>='0'&&s[i]<='9') b[s[i]-48]++;
					else { h=0;break;}
				}
			}
			for(i=0;i<=9;i++)
			{
				if(b[i]>=1) k=1;
				else {k=0;break;}
			}
			if(h==0) printf("INVALID\n");
			else
			{
				if(k==1) printf("YES\n");
				else printf("NO\n");
			}
		
	}
}
