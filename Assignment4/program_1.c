

#include <stdio.h>

int main() {
    int num, i;
    long mul = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            mul = mul * i;
        }
    }

    printf("\nMultiplication of factors = %ld\n", mul);

    return 0;
}
