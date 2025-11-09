#include<stdio.h>

void Table(int iNo) 
{
    int iCnt, iFact = 1;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    for (iCnt = 10; iCnt >= 1; iCnt--) 
    {
       printf("%d\n", iNo * iCnt);
    }
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter  number :");
    scanf("%d",&iValue);

    Table(iValue);


    return 0;

}
