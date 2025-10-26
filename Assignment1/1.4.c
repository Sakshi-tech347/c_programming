#include <stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if ((iNo % 5) ==0)
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
    int iValue1 =0;
    bool bRet = false;


    printf("Enter number \n");
    scanf("%d",&iValue1);
    
    bRet = Check(iValue1);

    if (bRet == true)
    {
        printf ("  Divisible by 5 ");
    }
    else
    {
         printf ("  not Divisible by 5 ", bRet);
    }    
    
    return 0;
}