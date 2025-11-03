 #include <stdio.h>
int CountEven(int iNo)
{
    int Digit= 0;
    int iCnt =0; // store original numbe
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while (iNo != 0) {
        Digit= iNo % 10; // get last digit
        if (Digit %2 ==0)
            iCnt++;
        iNo = iNo / 10; // remove last digit
    }
    
   return iCnt;
}
 

int main() {
    //int num, rem, count = 0;
    int iValue, iRet =0;
    
    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);
    printf("%d",iRet);
    
    
    
    return 0;
}
