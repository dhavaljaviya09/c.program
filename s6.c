#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50];
	int i,j,k;
	
		printf("enter the name:");
		scanf("%[^\n]s",&str1);
		
		for(i=0;str1[i]!='\0';i++);
		{
		printf("length:%d\n",i);
		}
		k=i;
		for(j=0;j<(i/2);j++)
		{
			printf("%c%c",str1[j],str1[--k]);
		
		}
		
		if(i%2!=0)
		{
			printf("%c",str1[(i/2)]);
		}
}