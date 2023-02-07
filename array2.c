#include<stdio.h>
void main()
{
		int M[5],S[5],E[5];
		int i,t,p;
			for(i=0;i<5;i++)
		{
			printf("maths :");
			scanf("%d,&M[i]);
		}
			for(i=0;i<5;i++)
		{
			printf("science :");
			scanf("%d",&S[i]);
		}
			for(i=0;i<5;i++)
		{
			printf("english :");
			scanf("%d",&E[i]);
		}
			printf("\nmaths \tscience \tenglish \ttotal \tper");
			for(i=0;i<5;i++)
		{
			t=M[i]+S[i]+E[i];
			p=t/3;
				printf("\n%d \t%d \t%d  \t%d \t%d",M[i],S[i],E[i],t,p);
		}
}