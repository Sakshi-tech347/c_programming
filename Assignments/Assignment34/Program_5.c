#include <stdio.h>
#include<stdbool.h> 
 

 

void Display(char ch)
{

      printf("Decimal value of %c is %d \n",ch, ch);
       printf("octal value of %c is %o \n",ch, ch);
        printf("hexadecimal value of %c is %x \n",ch, ch);
         
      
}

 
    
 
int main()
{
    char cValue = '\0';
    
    
     
    printf("Enter the charector : ");
    scanf("%c" ,&cValue);
      Display(cValue);
 

    return 0;
}