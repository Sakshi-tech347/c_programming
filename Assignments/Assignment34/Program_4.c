#include <stdio.h>
#include<stdbool.h> 
 

 

bool chckSpecial(char ch)
{

       
     
        if((ch >= ' '&& ch<='/') ||(ch >= ':'&& ch<='@')||
        (ch >= '['&& ch<='`')||(ch >= '{'&& ch<='~'))
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
    bool bRet = false ;
    
     
    printf("Enter the charector : ");
    scanf("%c" ,&cValue);
      
     bRet= chckSpecial(cValue);

     if( bRet == true)
     {
       printf(" %c it is a special charector ", cValue);
     } 
     else 
     {
       printf(" %c it is NOT special charector ", cValue);
     } 

    return 0;
}