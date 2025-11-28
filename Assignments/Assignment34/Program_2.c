#include <stdio.h>
 
void chckSmall(char ch)
{

       
       if((ch >= 'a'&& ch<='z'))
      {     
            ch = ch -32; 
             printf("%c",ch);
      }
      else if((ch >= 'A'&& ch<='Z'))
      {     
            ch = ch + 32; 
             printf("%c",ch);
      }
       else if((ch >= '0'&& ch<='9')||(ch >= ' '&& ch<='/')||
                (ch >= ':'&& ch<='@')|| (ch >= '['&& ch<='`')||
                (ch >= '{'&& ch<='~'))
      {     
             
             printf("%c",ch);
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
      
      chckSmall(cValue);

    return 0;
}
