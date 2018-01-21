#include<stdio.h>
void main()
{
	int n,a,b, c=0;
	printf("enter no.");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
	b=a*a;
	n=n/10;
	c=c+b;
	}
	
	
	printf("%d",c);
}
