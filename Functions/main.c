#include <stdio.h> /* Function and methods are the same. Parameters.*/
#include <stdlib.h> /* type of data */

int main()
{

    sayHi("Mark", 18);
    sayHi("Jayziol", 17);
    sayHi("Auvriem", 0);


    return 0;
}

void sayHi(char name[], int age/*Parameter a value given to a function */)
{
    printf("Hello %s, you are %d years old.\n", name, age);

}
