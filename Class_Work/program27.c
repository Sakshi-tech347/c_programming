
#include<stdio.h>
//Dynamic function
void Display(int iFrequency)
{
      //filter 
    if(iFrequency <= 0);
    {
        printf(" invalid input \n");
        
    }
        int iCnt = 0;
        for(iCnt =1 ;iCnt <= iFrequency; iCnt++)
        {
            printf("jay ganesh.. \n");
        }
}

int main()
{
    int iCount =0;
    int iFrequency = 0;
 
    printf("Enter the Frequency \n");
    scanf("%d",&iFrequency);


    Display(iFrequency);   


    return 0;
}
