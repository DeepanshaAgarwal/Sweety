#include<stdio.h>
void main()
{
	int n, a, d;
	printf("Enter them");
	scanf("%d%d%d",&n,&a,&d);
	int s;
	s=((n/2)*(2*a+((n-1)*d)));
	printf("%d",s);
		

}
