#include<stdio.h>
int main()
{
	int a,b;
	char p[20],ch;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	printf("enter the plain text:");
	scanf("%s",&p);
	for(int i=0;p[i]!=0;i++)
	{
		ch=p[i];
		if(ch=='a')
		{
			p[i]='b';
		}
		else if(ch=='e')
		{
			p[i]='u';
		}
		else{
			ch=((ch-'a')*a+b)%26+'a';
			p[i]=ch;
	    }
	}
	printf(p);
}
