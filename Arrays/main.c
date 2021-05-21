#include <stdio.h> /* ARRAY CAN STORE MANY DATA TYPES; VARIABLE AND ARRAYS ARE ALMOST THE SAME.*/
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {1, 2, 3, 4, 5, 6}; /* INDEX STARTS WITH 0 */
    /*luckyNumbers[1] = 200; FOR REPLACING INDEX VALUE 1*/
    printf("%d", luckyNumbers[1/*INDEX*/]);

    /* int luckyNumbers[CAPACITY OF ARRAY #]
        luckyNumbers[1] = (20) ASSIGNING VALUES IN ARRAYS*/
    char  phrase[20] = "ARRAYS";
    /* Example of character array */

    return 0;
}
