#include <stdio.h>

void CheckEvenOdd(int num)
{
    int iRem=0;

    iRem= num % 2;
    if(iRem == 0)
    {
        printf(" number is even ");
    }
        
    
    else 
   {
        printf("number is even ");   
   }

}


int main()
{
    int number;

    printf("Enter a number :");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}
