#include <stdio.h> /*Return Statement */
#include <stdlib.h>

double cube(double num); /* prototype  allows to create functions below main function*/

/*double cube(double num){
    double result = num * num * num;
    return result;
}
*/


int main()
{
    printf("Answer: %f", cube(7));

    return 0;
}

double cube(double num){
    double result = num * num * num;
    return result;
}
