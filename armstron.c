#include<stdio.h>
void main()
{
	int z,i=0,c,a;
	printf("Enter no.");
	scanf("%d",&z);
	y=z;
	
	while(z!=0)
	{
		a=z%10;
		i=i+(a*a*a);
		z=z/10;
	}
	if(y==i)
	{
		printf("Yes");
	}
	else{
		printf("No");
	}
	
}
