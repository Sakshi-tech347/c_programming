#include <stdio.h>
#include<stdbool.h>
 

 

bool chckDigit(char ch)
{

      if (  (ch >= '0'&& ch<='9') ) 
      {
            return true;
      }
      else
      {
            return false;
      }
}

 
    
 
int main()
{
    char cValue = '\0';
    bool bRet =0;
    
     
    printf("Enter the charector : ");
    scanf("%c" ,&cValue);
      
       bRet = chckDigit(cValue);

      if(bRet == true)
      {
             printf("it a digit ");
      }
      else
      {
             printf("it is not a digit ");
      }
     

   

    return 0;
}