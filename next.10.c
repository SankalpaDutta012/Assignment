#include <stdio.h>
//1.	Write a program, which will print last digits of all factors. Input 385 output 5 7 1 5 5 7 5.
int main() {
    int num, i, last_digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            last_digit = i % 10;
            printf("%d ", last_digit);
        }
    }
    return 0;
}
