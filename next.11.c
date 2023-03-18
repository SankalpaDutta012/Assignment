//2.	Write program, which will output all factors by exchanging last two digits. Input 385 output 50 70 11 53 55 77 358.
#include <stdio.h>

int main() {
    int num, i, last_digit, second_last_digit, new_factor;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            last_digit = i % 10;
            second_last_digit = (i / 10) % 10;
            new_factor = (i / 100) * 100 + last_digit * 10 + second_last_digit;
            printf("%d ", new_factor);
        }
    }
    return 0;
}
