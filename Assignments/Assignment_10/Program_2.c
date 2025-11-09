#include<stdio.h>

 double RectArea(float fHeight, float fWidth)
 {
    double dArea =0.0;
    
    dArea = fHeight * fWidth;

    return dArea; 

 }

int main ()
{
    float fValue1 =0.0 ,fValue2 = 0.0;
    double dRet = 0.0;

    printf("enter height of Rectangle :");
    scanf("%f", &fValue1);

     printf("enter width of Rectangle :");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf(" Area of Rectangle is :%f ",dRet);


    return 0;
}
