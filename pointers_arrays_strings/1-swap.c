#include "main.h"

/**
* swap_int - swaps the values of two integers swap the values
*@a: input parameter 1
*@b: imput parameter 2
*
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
