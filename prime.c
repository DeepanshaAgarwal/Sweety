#include<stdio.h>
void main()
{
	int n,c=0,i;
	printf("Enter no.");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
	if(n%i==0){
		c=1	;
	}
	}
	if(c==0)
	{printf("prime");
	}
	else
	{
		printf("no");
	
	}
}
	
