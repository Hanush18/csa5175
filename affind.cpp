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
		ch=((ch-'a')*a+b)%26+'a';
		p[i]=ch;
	}
	printf(p);
	printf("\n");
	for(int i=0;p[i]!=0;i++)
	{
		ch=p[i];
		ch=(((ch-'a')-b)%26)/a+'a';
		p[i]=ch;
	}
	printf(p);
}
