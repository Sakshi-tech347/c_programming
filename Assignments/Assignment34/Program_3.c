#include <stdio.h>
 
 

 

void Display(char ch)
{
       int i = 0;
       
       
       if((ch >= 'a'&& ch<='z'))
      {     
             
          for( i ==ch;  ch <= 'z' ; ch++ )
             printf("%c\t",ch);
             
      }
      else if((ch >= 'A'&& ch<='Z'))
      {     
           for(i ==ch;  ch<= 'Z' ; ch++ )
             printf("%c\t",ch);
            
      }
       
      else
      {
             printf("it is not invalid input");
      }
}

 
    
 
int main()
{
    char cValue = '\0';
    
    
     
    printf("Enter the charector : ");
    scanf("%c" ,&cValue);
      
      Display(cValue);

    
     

   

    return 0;
}