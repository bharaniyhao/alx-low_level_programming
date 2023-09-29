#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked 
 * return: 1 if c a letter, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'Z')||(c >= 'A' && c <= 'Z'));
}
