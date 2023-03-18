#include <stdio.h>
//4.	Write program, to find the number of factors.
int main() {
    int num, i, count = 0, sum = 0;
    float avg;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
            sum += i;
        }
    }
    avg = (float) sum / count;
    printf("Average factor of %d is: %.2f", num, avg);
    return 0;
}
