#include<stdio.h>
#include<string.h>
void append(char *s, char c)
{
	int s1=strlen(s);
	s[s1]=c;
	s[s1+1]='\0';
}
void main()
{
	char s[10],c,a;
	printf("enter string");
	scanf("%s",s);	
	c='.';
	append(s, c);
	printf("%s",s);
}

