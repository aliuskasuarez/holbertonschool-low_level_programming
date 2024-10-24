#include <stdio.h>
/**
 * _isalpha - chequea si un caracter es alfabetico
 * @c: el caracter a chequear como un int 
 *
 * Return: 1 si es una letra dosent matter mayuscula o minuscula y 0 
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
return (0);
}
