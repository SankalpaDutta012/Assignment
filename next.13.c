//4.	Write program, to find the number of factors. Input 24 output 7. Input 35 output 3.
#include <stdio.h>

int main() {
    int num, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    printf("Number of factors of %d is: %d", num, count);
    return 0;
}
