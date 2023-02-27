#include <stdio.h>
/**
 * swap_int - function that swap the value
 * of two integrrs
 **/
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a; /*a is put in place of temp storage*/
	*a = *b; /*a value is now been replace with the value of b */
	*b = temp;/*a value is now b and but in temp*/
}
