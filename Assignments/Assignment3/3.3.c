
// print EvenFactor

#include <stdio.h>

void EvenFactor(int iNo)
{
    int i= 0;
   

    for(i=2 ; i<=iNo;  i++)
    {
        if (iNo%i ==0 && i%2 ==0) 
        {
            
        
                printf("%d \t",i);
          
           
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("enter value :");
    scanf("%d",&iValue);

    EvenFactor(iValue);


    return 0;
}