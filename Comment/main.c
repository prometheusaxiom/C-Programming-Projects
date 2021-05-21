#include <stdio.h>/**< Comments, Constants */
#include <stdlib.h>

int main()
{
    const int num = 5; /* Const cannot be modified hence the error in num = 8. Constants should be All caps letter.*/
    printf("Comments are fun\n");
    printf("%d\n", num);
    num = 8;
    printf("%d\n", num);
    printf("Hello\n"); /* constant, cannot be changed*/
    printf("%d\n", 90); /* Also constant*/

    return 0;
}
