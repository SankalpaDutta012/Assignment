//5.	Write program to find average factor. I/p 24  o/p 8.429 (59/7)      I/p 25   o/p 15.67  (47/3) 
#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    float avg;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            count++;
        }
    }

    avg = (float) sum / count;

    printf("The average factor of %d is %.2f\n", num, avg);

    return 0;
}
