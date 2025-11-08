#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
    int iRem = 0; 

    iRem =iNo%2 ;
    if(  iRem == 0)
    {
        true;
    }
    else
    {
        false;
    }
}

int main()
{
    int ivalue = 0;
    bool bRet = false;

    printf("enter number:");
    scanf("%d",&ivalue);

    bRet = CheckEven(ivalue);
    printf("result is %d" ,bRet );
   
    return 0;
}
