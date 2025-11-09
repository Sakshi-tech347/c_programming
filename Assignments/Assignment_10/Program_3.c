#include<stdio.h>

 int KMtoMeter(int iNo)
 {
    int iMeter =0.0;
    iMeter= 1000;
    
    iMeter =iMeter *iNo;

    return iMeter; 

 }

int main ()
{
    int iValue =0;
    int iRet = 0;

    printf("enter Distance :");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf(" Area of Rectangle is :%d ",iRet);


    return 0;
}
