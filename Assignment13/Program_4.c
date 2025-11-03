#include<stdio.h>

int sum_natural_numbers(int limit)
{
    int i, iSum = 0;

    for(i=1; i<= limit; i++)
    {
       iSum= iSum+i;
    }
    return iSum;
}



int main()
{
    int limit =0;

    printf("enter number:");
    scanf("%d",&limit);

    printf("%d\n",sum_natural_numbers(limit));


    return 0;
}