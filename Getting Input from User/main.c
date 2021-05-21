#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charName[30];
    printf("Enter your name: ");
    fgets(charName, 30, stdin);
    printf("Your name is %s\n\n", charName);

    char nickName[20];
    printf("Enter your nickname: \n");
    scanf("%s", &nickName);
    printf("Your name is %s\n\n", nickName);

    char gradeChar;
    printf("Enter your grade: \n");
    scanf("%s", &gradeChar); /* Wont let me put in if %c. %s works. */
    printf("Your grade is %c\n\n", gradeChar);

    int age;
    printf("Enter your age: \n");
    scanf("%d", &age); /* Use & to store data in variable*/
    printf("You are %d years old.\n\n", age);

    double gpa;
    printf("Enter your gpa: \n");
    scanf("%lf", &gpa); /**< Look for double = lf */
    printf("Your gpa is %f\n\n", gpa);



    return 0;
}
