#include<stdio.h>
void main()
{
	int n,i,j, a[10];
	printf("enter no.");
	scanf("%d",&n);
	printf("enter array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	
	for(j=1;j<n;j++)
	{
		if(a[j]>max)
		{
		max=a[j];
		
		}
		
	}
	
printf("%d",max);	
	
}
