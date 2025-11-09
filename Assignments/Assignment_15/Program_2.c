 #include <stdio.h>
int CountOdd(int iNo)
{
    int Digit= 0;
    int iCnt =0; 
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while (iNo != 0) {
        Digit= iNo % 10; 
        if (Digit %2 !=0)
            iCnt++;
        iNo = iNo / 10; 
    }
    
   return iCnt;
}
 

int main() {
    
    int iValue, iRet =0;
    
    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);
    printf("%d",iRet);
    
    
    
    return 0;
}
