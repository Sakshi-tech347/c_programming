
/*
        Start
            Accept number and store as no
            Divide by 2
            if the reminder is 0
                then the display as even
            otherwise
                display as odd
        Stop
*/


#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem =0;

    iRem = iNo % 2;
    if(iRem == 0)
    {
        printf(" it is even number \n");
    }
    else
    {
        printf("it is odd number \n");
    }

}

int main()
{
    int iValue = 0;
    printf ("enter number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);


    return 0;
}
