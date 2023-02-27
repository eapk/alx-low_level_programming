#include <stdio.h>
/**
 * swap_int - function that swap the value
 * of two integrrs
 * @a: int be swab and
 * @b: int been swap for a
 **/
void swap_int(int *a, int *b)
{
int temp;
temp = *a; /*a is put in place of temp storage*/
*a = *b; /*b value is now put for a */
*b = temp;/*a value is now b and but in temp*/
}
