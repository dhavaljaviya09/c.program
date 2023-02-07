#include<stdio.h>
#include<conio.h> 
int main() 
{ 
    char string[] = "test string"; 
    char *replaced_string = replaceWith3Characters(string,'e'); 
 
    printf("Original String: %s\n",string); 
    printf("Replaced String: %s\n",replaced_string); 
     
    //return 0; 
} 