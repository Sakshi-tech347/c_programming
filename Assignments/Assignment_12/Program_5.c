#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int number )
{
    
    
  
        if ( number%5==0) 
        {
           return true;

        }
        else 
        {
            return false;
        }
        
}
   

int main()
{
    int number =0;
    bool bRet = false;

    printf("Enter number ");
    scanf("%d",&number);

    
   

    bRet =   is_divisible_by_five(number);
    if(bRet == true)
    {
        printf(" yes is Divisible by 5");
    }
    else
    {
         printf(" no is not  Divisible by 5");
    }


    return 0;
}
