#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual  salary income: ");
    scanf("%3f", &income);

    // Check loan qualification
    if (age > 21 && income >= 21000) {
        printf("Congratulations! You qualify for the bank loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    

    return 0;
}
