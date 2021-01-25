#include <stdio.h>
int main() {
    float base;
    int  exp;
    float result = 1;
    printf("Enter a base number: ");
    scanf("%f", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %.3f\n", result);
    return 0;
}