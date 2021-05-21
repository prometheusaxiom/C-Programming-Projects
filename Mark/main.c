/** \ Variables*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char characterName[] = "Mark";
    int characterAge = 10;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    /** \ We can modify the variable so that halfway to the story it changes. */

    characterAge = 20;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);

    return 0;
}

