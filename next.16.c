//6.	Write program, which reads a number and prints “yes” if the given number is prime. If the given number is not a prime then “no” is printed. (Hint: Use above program. A prime number has only one factor). Input 24 output “no”. Input 13 output “yes”
#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
