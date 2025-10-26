#include<stdio.h>

int MultFact(int iNo)
{
    
    int i =0;
    
    for(i = 1; i <= iNo; i++ )
    {
        if(iNo%i== 0)
        {
            printf("%d ",i);
            
            
        }

    }
    
 
}

int main()
{
    int iValue =0;
    int iRet =0;
    int iProduct = 0;

    printf("enter value:");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
   
    
    printf("multiplication of factor is : %d",iProduct);
    return 0;
}