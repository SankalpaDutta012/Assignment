//prints all numbers between 20 and 40, and all even numbers between 50 and 80.
#include<stdio.h>
int main(){
    int a;
    for(a = 20;a <= 40;a++){
        
        printf("%d\n." , a);
        }
    for (a = 50; a <=80; a++){
        if(a%2 == 0)
        printf("%d\n.", a);
    }
    
    return 0;
}
