//Delete 1st digit after decimal
#include<stdio.h>
int main (){
    float a, b, c, d; int y , x;
    scanf("%f", &a);
    y = a;
    b = a - y;
    b = b*10 ;
    x = b ;
    c = b - x ;
    d = y + c ;
    printf ("The modified one will be %f.\n" , d);
    return 0 ;
}
