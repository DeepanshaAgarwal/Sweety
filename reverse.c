#include<stdio.h>
#include<string.h>
void main()
{
	char s[10];
	int i,str;
	printf("enter string");
	scanf("%s",s);	
	
	str=strlen(s);
	for(i=(str-1);i>=0;i--)
	{
	printf("%c",s[i]);	
	}
}

