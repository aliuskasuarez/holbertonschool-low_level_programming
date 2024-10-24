#include <stdio.h>
/**
 * _isalpha - chequea si es alfanumerico
 * @c: el caracter como un int
 *
 * Return: 1 si c es una letra
 *         0 sinoes0
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
return (0);
}
