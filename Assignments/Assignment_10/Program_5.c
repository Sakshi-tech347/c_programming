#include<stdio.h>

 double SquareMeter(int iValue)
 {
    double dMeter =0.0;
    dMeter= 0.0929;
    
    dMeter = iValue * dMeter  ;

    return dMeter; 

 }

int main ()
{
    int iValue =0;
    double dRet = 0;

    printf("enter Area in square feet :");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf(" Area in square meter :%d ",  dRet);


    return 0;
}
