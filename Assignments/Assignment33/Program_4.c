#include <stdio.h>
#include<stdbool.h>
 

 

bool chckSmall(char ch)
{

      if (  (ch >= 'a'&& ch<='z') ) 
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
      
       bRet = chckSmall(cValue);

      if(bRet == true)
      {
             printf("it a small  case charector ");
      }
      else
      {
             printf("it is not a small case charector ");
      }
     

   

    return 0;
}