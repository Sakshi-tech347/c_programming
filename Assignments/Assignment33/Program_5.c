#include <stdio.h>
 
 

 

void DisplaySchedule(char chDiv)
{

    if(chDiv == 'A') 
    {
      printf("division %c your exam at 7Am");
    }
    else if  (chDiv == 'B')
    {
      printf("division %c your exam at 8.30 Am");
    }
     else if  (chDiv == 'C')
    {
      printf("division %c your exam at 9.20 Am");
    }
     else if  (chDiv == 'D')
    {
      printf("division %c your exam at 10.30 Am");
    }
    else if (chDiv != 'A' && chDiv != 'D' )
    {
      printf("you enter wrong division");
    }
    
}

 
    
 
int main()
{
    char cValue = '\0';
     
    
     
    printf("Enter your division : ");
    scanf("%c" ,&cValue);
      
        DisplaySchedule(cValue);
 
    return 0;
}