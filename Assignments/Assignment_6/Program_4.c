#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{   
    int iMult = 1;
    /*if(iNo1 <0 && iNo2 <0 && iNo3 <0)
    {
        iNo1 = -iNo1;
        iNo2 = -iNo2;
        iNo3 = -iNo3;

    } */

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;

}


int main()
{   
    int iValue1 ,iValue2, iValue3 , iRet = 0;

    printf("Enter first number: " );
    scanf("%d",&iValue1 );

       printf("Enter Second number: " );
       scanf("%d ",&iValue2);


          printf("Enter Third number: " );
          scanf("%d", &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is :%d " ,  iRet);


    return 0;
}


