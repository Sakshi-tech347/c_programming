#include<stdio.h>

 double FhtoCs(float fTemp)
 {
    double dcelsius =0.0;
    dcelsius = (fTemp - 32) * (5/9);

    return dcelsius; 

 }

int main ()
{
    float fValue =0.0 ;
    double dRet = 0.0;

    printf("enter Temperature in fahrenheit:");
    scanf("%d", &fValue);

    dRet = FhtoCs(fValue);

    printf(" Temperature in celcious :%f ",dRet);


    return 0;
}
