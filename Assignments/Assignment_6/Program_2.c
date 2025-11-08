#include <stdio.h>
#include <stdbool.h>


bool chkGreter(int iNo)
{
    if(iNo>100)
    {
        return 0; 
    }
    else
    {
        return 1;
    }
}


int main()
{
    int ivalue =0;
    bool bRet =false;
    printf(" enter number :");
    scanf("%d",&ivalue);

    bRet = chkGreter(ivalue);

    if(bRet == false)
    {
        printf("Greter");
    }
    else
    {
        printf("smaller");
    }

    return 0;
}
