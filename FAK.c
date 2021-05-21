#include <stdio.h>
#include <stdlib.h>

int main()
{


    char charName[30];
    printf("Enter your name: ");
    fgets(charName, 30, stdin);
    printf("Your name is %s", charName);

    char gradeChar;
    printf("Enter your grade: \n");
    scanf("%c", &gradeChar); /* Wont let me put in if %c. %s works. */
    printf("Your grade is %c\n\n", gradeChar);

    return 0;
}
