#include<stdio.h>

void print_Factor(int number )
{
    int i =0;
    for(i=1; i<= number ; i++)
    {
        if (number%i ==0 ) 
        {
            printf("%d \t",i);
        }
        
    }
}
int main()
{
    int number;

    printf("Enter number ");
    scanf("%d",&number);

    print_Factor(number);


    return 0;
}
