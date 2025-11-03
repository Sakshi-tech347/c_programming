#include<stdio.h>

int count_factor(int number )
{
    int i , iCnt = 0;
    
    for(i=1; i<= number ; i++)
    {
        if (number % i ==0 ) 
        {   

            iCnt++;
            
        }
        
    }
    return iCnt;
}

int main()
{
    int iNumber , iRet;

    printf("Enter number ");
    scanf("%d",&iNumber);

    iRet =count_factor(iNumber);

     printf("\nTotal number of factors of %d = %d\n", iNumber, iRet);


    return 0;
}




