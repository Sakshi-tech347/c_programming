#include <stdio.h>
#include<stdbool.h>
 
bool chckAlpha(char ch)
{

      if ((ch >= 'a'&& ch<='z')||(ch >= 'A'&& ch<='Z') ) 
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
      
       bRet = chckAlpha(cValue);

      if(bRet == true)
      {
             printf("it is charector ");
      }
      else
      {
             printf("it is not charector ");
      }
    
    return 0;
}
