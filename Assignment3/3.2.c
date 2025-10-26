#include<stdio.h>

void DisplayFactor(int iNo)
{

    int i =0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i =1; i<iNo; i++)
    {
        if(iNo%i == 0)
        {
            printf("%d \t",i);
        }
        
    }

}

 /* if(iNo%1 ==0)
    { 
        printf("1 \n ");

    }

    if(iNo%2 ==0)
    {
        printf("2 \n ");
    }

    if(iNo%3 ==0)
    {
        printf("3 \n ");
    
    }
    */
   
    


int main()
{

    int iValue = 0;

    printf("enter value :");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}