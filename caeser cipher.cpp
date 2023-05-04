#include<stdio.h>
int main(){
	char pt[20],ch;
	int k,s;
	printf("enter a plaintext:");
	scanf("%s",&pt);
	printf("enter a key:");
	scanf("%d",&k);
	printf("1.encryption,2.decryption:");
	scanf("%d",&s);
	switch(s)
	{
		case 1:
			for(int i=0;pt[i]!=0;i++){
			ch=pt[i];
			ch=(ch-'a'+k)%26+'a';
			pt[i]=ch;
	}
	printf(pt);
	case 2:
			for(int i=0;pt[i]!=0;i++){
			ch=pt[i];
			ch=(ch-'a'-k)%26+'a';
			pt[i]=ch;
		}
	printf(pt);
}
}
