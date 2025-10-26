#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt=0; 
    if( iNo <0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d \t", iNo);
    }
}
int main()
{
    int iValue= 0;
    int iCount=0;

    printf("Enter value:");
    scanf("%d", &iValue);

    printf("Enter Frequency:");
    scanf("%d", &iCount);

    Display(iValue,iCount);



    return 0;
}