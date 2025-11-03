#include<stdio.h>

 double CircleArea(float fRadius)
 {
    double dPi = 0.0, dArea =0.0;
    dPi = 3.14;

    dArea = dPi *fRadius * fRadius;

    return dArea; 

 }

int main ()
{
    float fValue =0.0;
    double dRet = 0.0;

    printf("enter radius :");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf(" Area of circle is :%f ",dRet);


    return 0;
}