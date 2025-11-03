#include <stdio.h>

// Function declaration
int multiply(int a, int b, int c)
// Function definition (outside main)
// Multiplies only the non-zero inputs. If all are zero, returns 0.
{
    int prod = 1;
    int nonZeroCount = 0;

    if (a != 0) { prod *= a; nonZeroCount++; }
    if (b != 0) { prod *= b; nonZeroCount++; }
    if (c != 0) { prod *= c; nonZeroCount++; }

    if (nonZeroCount == 0) // all inputs were 0
        return 0;
    return prod;
}

int main()
 {
    int x, y, z, product;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    product = (x, y, z);

    // Inform user if any zero was ignored
    if (x == 0 || y == 0 || z == 0) 
    {
        // If product is 0 here, it means all three were 0
        if (product == 0)
            printf("All numbers were 0 — product = 0.\n");
        else
            printf("Zero(s) ignored while multiplying.\n");
    }

    printf("Product = %d\n", product);
    return 0;
}


