#include<stdio.h>
void main()
{
	int n, p,a=1, i;
	printf("enter no. and power");
	scanf("%d%d",&n,&p);
	while(p!=0)
	{
		a=a*n;
		p--;
	}
		
		
	printf("%d",a);
	
}
