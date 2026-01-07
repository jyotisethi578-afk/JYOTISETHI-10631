#include <stdio.h>

int main() {
    int num;
    int isPrime = 1;

    // Step 1 & 2: Ask user and read number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 3: Check positive, negative, or zero
    if (num > 0) {
        printf("The number is Positive.\n");
    }
    if (num < 0) {
        printf("The number is Negative.\n");
    }
    if (num == 0) {
        printf("The number is Zero.\n");
    }

    // Step 4: Check even or odd
    if (num % 2 == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }

    // Step 5 to 8: Prime number checking
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= num - 1; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Step 9: Display prime result
    if (isPrime == 1) {
        printf("The number is Prime.\n");
    } else {
        printf("The number is Not Prime.\n");
    }

    // Step 10: End program
    return 0;
}
