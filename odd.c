#include<stdio.h>
void main()
{
	int n, m,i;
	printf("enter two numbers");
	scanf("%d%d",&n,&m);
	for(i=n+1;i<m;i++)
	{
	if(i%2!=0)
	{
		printf("%d\t",i);	
	}	
	}
}
	
