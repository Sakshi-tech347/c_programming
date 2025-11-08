#include <stdio.h>
#include <stdbool.h>


bool chkEqual(int iNo1, int iNo2 )
{
    if(iNo1 == iNo2 )
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
    int ivalue1 =0;
    int ivalue2 =0;
    bool bRet =false;
    printf(" enter 2 number :");
    scanf("%d %d",&ivalue1,&ivalue2);

    bRet = chkEqual(ivalue1 ,ivalue2);

    if(bRet == false)
    {
        printf("Equal");
    }
    else
    {
        printf("not Equal");
    }


    return 0;
}
