#include <stdio>
/*
 * _strlin(char s) - lenght of a string
 *using strlen
 */
int _strlen(char *s);
{
	/*initializing the string*/
	char *str;
	int len;

	str = "My First Strlen";
	len = _strlen(str);
	printf('%d\n", len);
	return(0);
}
