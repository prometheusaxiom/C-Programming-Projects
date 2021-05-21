#include <stdio.h>/**< Printf with FORMAT SPECIFIERS */
#include <stdlib.h>

int main()
{
    int favNum = 90218;
    char myChar ='A';
    printf("\"Hello\"\nWorld\n"); /**<  \n is new line. \" and \' used for quotation marks */
    printf("My favorite %s is %d.\n", "number", 500);/**< %s for letters and %d for whole numbers. */
    printf("My favorite %s is %f.\n", "number", 500.0);/**< %f for decimal numbers. */
    printf("My favorite %c is %d.\n", myChar, favNum);/**< Printf with integer variable and character variable. */


    return 0;
}
