#include<stdio.h>
int main()
{
	char day[10];
	printf("enter day");
	scanf("%s",day);
	if(day=="Sturday" || day=="Sunday")
	{
		printf("yes");
	}
	else if(day=="Monday"|| day=="Tuesday"||day=="Wednesday"||day=="Friday"||day=="Thursday")
	{
		printf("no");
	}
	return 0;
}
