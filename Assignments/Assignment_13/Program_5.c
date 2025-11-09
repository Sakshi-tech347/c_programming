#include<stdio.h>

int sum_even_numbers(int limit)
{
    int i , iSum= 0;
    for(i=1; i<= limit; i++)
    {
        if(i%2 ==0)
        iSum= iSum + i;
    }
    return iSum;
}



int main()
{
    int limit =0;

    printf("enter number:");
    scanf("%d",&limit);

    printf ("%d\n",sum_even_numbers(limit));

    return 0;
}
