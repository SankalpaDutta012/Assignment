//1.	Find the frequency of a character in a strings
#include <stdio.h>
#include <string.h>

int main() {
   char string[100], ch;
   int frequency = 0, i;
   printf("Enter a string: ");
   fgets(string, 100, stdin);
   printf("Enter the character to find frequency: ");
   scanf("%c", &ch);

   for (i = 0; string[i] != '\0'; ++i) {
      if (ch == string[i])
         ++frequency;
   }

   printf("Frequency of %c = %d", ch, frequency);
   return 0;
}
