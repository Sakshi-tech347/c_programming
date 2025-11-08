#include <stdio.h>


void CheckNumberType(int num)
 {
    if (num > 0)
        printf("%d is a positive number \n", num);
    else if (num < 0)
        printf("%d is a negative number \n", num);
    else 
        printf("%d is a zero number \n", num);
   
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);


    CheckNumberType(number);

    return 0;
}
