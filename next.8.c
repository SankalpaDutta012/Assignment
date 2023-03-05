// even numbers between 20 and 70
#include <stdio.h>
int main() {
	int i;
	printf("Even numbers between 20 to 70 (inclusive):\n");
	for (i = 20; i <= 70; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d.\n ", i);
		}
	}
	return 0;
}
