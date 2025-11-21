// 5
// 1 * 2 * 3 * 4 * 5 *
// 1 2 3 4 5 6 7 8 9 10



#include<stdio.h>
void Pattern( int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1 ; iCnt <= (iNo*2) ;iCnt++)
    if(iCnt % 2 ==0)
    {
        printf("*\t");
    }
    else
    {
        printf("%d\t",((iCnt/2)+1),iCnt);
    }
    
       
    
}
int main()
{
    int iValue =0;
    printf("Enter number of Elements:");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}