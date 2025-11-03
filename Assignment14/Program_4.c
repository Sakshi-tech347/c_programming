 #include <stdio.h>
int CountFour(int iNo)
{
    int Digit= 0;
    int iCnt =0; // store original number
    
    while (iNo != 0) {
        Digit= iNo % 10; // get last digit
        if (Digit== 4)
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

    iRet = CountFour(iValue);
    printf("%d",iRet);
    
    
    
    return 0;
}
