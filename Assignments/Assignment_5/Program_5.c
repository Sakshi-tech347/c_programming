#include <stdio.h>


int FindLargest(int x, int y , int z)
 {  
    int large = 0;
    if (x > y && x > z)
        large = x;
    else if (y>z)
        large = y;
    else 
        large = z;
   
        return large;
}

int main()
{
    int a, b, c;
    int result;

    printf("Enter a  first number: ");
    scanf("%d", &a);

    printf("Enter a  Second number: ");
    scanf("%d", &b);

    printf("Enter a  Third number: ");
    scanf("%d", &c);


    result = FindLargest(a,b,c);
    printf("Largest number is: %d \n ", result);


    return 0;
}
