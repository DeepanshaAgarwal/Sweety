#include<stdio.h>
#include<string.h>
void main()
{
	char s[10],temp;
	int i,str;
	printf("Enter character");
	scanf("%s",s);
	str=strlen(s);
	for(i=0;i<str;i+=2)
	{
		
			temp=s[i];
			s[i]=s[i+1];
			s[i+1]=temp;
		
		
		
		}
		
	
			printf("%s",s);
		
		
}
