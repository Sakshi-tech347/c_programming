#include<stdio.h>

void print_even_numbers(int limit)
{
    int i = 0;
    for(i=1; i<= limit; i++)
    {
        if(i%2 ==0)
        printf("%d\t",i);
    }

}



int main()
{
    int limit =0;

    printf("enter number:");
    scanf("%d",&limit);

    print_even_numbers(limit);

    return 0;
}
