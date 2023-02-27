#include<stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a / 10 - (a / 100 * 10);
    c = a - (a / 10 * 10);
    d = a / 100 * 100 + c * 10 + b;
    printf("The number with last two digits exchanged is %d.\n", d);
    return 0;
}
