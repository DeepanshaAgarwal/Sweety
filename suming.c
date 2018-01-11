#include<stdio.h>
void main()
{
	int n,n1,j,k,a[20],i, s=0;
	printf("enter 2 no.");
	scanf("%d%d",&n,&k);
	printf("Enter no. of elements");
	scanf("%d",&n1);
	printf("enter elements");
	for(i=0; i<n1;i++)
	scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	{
		s=s+a[i];
		
	}
	printf("%d",s);
}
	
