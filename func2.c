#include<stdio.h>
void addition()
{
	int	a,b,c;
	printf("enter no1:");
	scanf("%d",&a);
	printf("enter no2:");
	scanf("%d",&b);
	printf("enter no3:");
	scanf("%d",&c);


	if(a>b)
	{
		if(a>c)
		{
			printf("large no of A: %d",a);
		}
		else
		{
			printf("large no of  C %d", c);
		}
	}
		else
	{	
		if(b>c)
	{
			printf("large no of B %d:",b);
	}	
	
	
		else
	{
			printf("large no of C %d",c);
		}
	}
} 	
int main()
{
	
	addition();
	printf("\n.....");
}
	