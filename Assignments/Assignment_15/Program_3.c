 #include <stdio.h>
int CountRange(int iNo)
{
    int Digit= 0;
    int iCnt =0; 
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while (iNo != 0) {
        Digit= iNo % 10; 
        if (Digit < 7 && Digit > 3)
            iCnt++;
        iNo = iNo / 10; 
    }
    
   return iCnt;
}
 

int main() {
    
    int iValue, iRet =0;
    
    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);
    printf("%d",iRet);
    
    
    
    return 0;
}
