#include<stdio.h>



int FactorialDiff(int iNo) {
    int iCnt , ievenFact = 1,ioddFact = 1; 
    int iDiff =0;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo<0)
        {
            iNo = -iNo;
        }
       
        if(iCnt % 2 == 0)
        ievenFact = ievenFact * iCnt;
        
        else 
        {
            ioddFact = ioddFact * iCnt;
        }

        iDiff =  ievenFact -ioddFact ;
        
    }
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter  number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("  Factorial differnce is %d", iRet);
    return 0;

}