#include<stdio.h>
void main()
{
	int n,b=0,c,a;
	printf("Enter no.");
	scanf("%d",&n);
	c=n;
	
	while(n!=0)
	{
		a=n%10;
		b=b+(a*a*a);
		n=n/10;
	}
	if(c==b)
	{
		printf("Yes");
	}
	else{
		printf("no");
	}
	
}
