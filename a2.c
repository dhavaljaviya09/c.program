#include<stdio.h>
void main()
{
		int M[5],S[5],E[5];
		int i,t,g;
		float p;
			for(i=0;i<5;i++)
		{
			printf("maths :");
			scanf("%d",&M[i]);
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
			printf("\nmaths \tsci. \teng. \ttotal \tper. \tresult");
			for(i=0;i<5;i++)
		{
			t=M[i]+S[i]+E[i];
			p=(float)t/3;
			if(M[i]>33 && S[i] && E[i]>33)
				printf("\n%d \t%d \t%d \t%d \t%2f \tpass",M[i],S[i],E[i],t,p);
			else
				printf("\n%d \t%d \t%d  \t%d \t%2f \tfail",M[i],S[i],E[i],t,p);
		}
}