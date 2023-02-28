#include<stdio.h>
// EXAM SUM
int main()
{
    int x = 20 , y = 35 ;
    x = y++ + x++ ;
    y = ++y + ++x ;
    printf("%d %d" , x ,y);
    return 0 ;
}
