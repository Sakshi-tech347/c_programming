#include<stdio.h>

int sum_of_factor(int number )
{
    int i ,iSum =0;
    for(i=1; i<= number ; i++)
    {
        if (number%i ==0 ) 
        {
            iSum = i+iSum;

        }
        
    }
    return iSum;
}
int main()
{
    int number ;

    printf("Enter number ");
    scanf("%d",&number);

   

    printf("%d\n",sum_of_factor(number));


    return 0;
}