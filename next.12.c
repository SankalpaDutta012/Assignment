//Write program, which prints sum of all factors (input 24 output 2 + 3 + 4 + 6 + 8 + 12 + 24 = 59). Input 35 output 5+7+35=47.
#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nSum of factors of %d is: %d", num, sum);
    return 0;
}
