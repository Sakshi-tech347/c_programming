#include <stdio.h>
#include<stdbool.h>
 

 

bool chckCapital(char ch)
{

      if (  (ch >= 'A'&& ch<='Z') ) 
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
      
       bRet = chckCapital(cValue);

      if(bRet == true)
      {
             printf("it a capital charector ");
      }
      else
      {
             printf("it is not a capital charector ");
      }
     

   

    return 0;
}