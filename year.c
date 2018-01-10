#include<stdio.h>
void main()
{int year;
printf("enter year");
scanf("%d",&year);
if(year%4==0 && year%100!=0)
{printf("yes");
}
else
{
	printf("no");
}
}
