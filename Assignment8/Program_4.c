#include<stdio.h>

/*int Factorial(int iNo)
{
    int iCnt =0;
    int iFact =0;
    for(iCnt =1 ; iCnt<=iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact ;
   
}*/

void Table(int iNo) 
{
    int iCnt, iFact = 1;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= 10; iCnt++) 
    {
       printf("%d\n",iCnt * iNo);
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