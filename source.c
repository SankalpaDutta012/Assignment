//Find the first digit of factorial part

#include<stdio.h>
int main()

{
    float a , b ;
    int p , q ;
    printf("Enter the number :");
    scanf("%f" , &a);
   
    p = a , b = a - p , q = b * 10 ;
    
    printf("The result will be %d" , q);
   
    return 0 ;
}
