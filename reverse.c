#include <stdio.h>
#include <string.h>
void main()
{
    char s1[50], s2[50];
    int i = 0, j = 0;
    printf("enter s1:");
    scanf("%[^\n]s", &s1);
    printf("enter s2:");
    scanf("%s", &s2);
    while (s1[i] != '\0')
        ++i;
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        ++i;
        ++j;
    }
    s1[i] = '\0';
     printf("\n string:%s", s1); 
}