#include <stdio.h>/**< Data types */
#include <stdlib.h>

int main()
{
   int age = 40; /**< No quotation if using number. Integer is whole number. */
   double gpa = 3.7; /**< Use to represent decimal number. For beginners. */
   char grade = 'A'; /**< For only one letter */
   char phrase[] = "Giraffe Academy"; /**< [] for strings or two or more letters */

   printf("%d\n", age);/**< %d if a whole number is to be printed */
   printf("%f\n", gpa);/**< %f if a number with a decimal is to be printed */
   printf("%c\n", grade);/**< %c if one letter to be printed */
   printf("%s\n", phrase); /**< %s if two or more letters to be printed */
    return 0;
}
