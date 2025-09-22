#include <stdio.h>

int main() {
    int num1, num2, product;

    // Ask the user for two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform multiplication
    product = num1 * num2;

    // Display result
    printf("The product of %d and %d is: %d\n", num1, num2, product);

    return 0;
}
