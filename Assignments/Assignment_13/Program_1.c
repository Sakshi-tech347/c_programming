#include<stdio.h>

void print_numbers(int limit)
{
    int i = 0;
    for(i=1; i<= limit; i++)
    {
        printf("%d\t",i);
    }

}

int main()
{
    int limit =0;

    printf("enter number:");
    scanf("%d",&limit);

    print_numbers(limit);

    return 0;
}
