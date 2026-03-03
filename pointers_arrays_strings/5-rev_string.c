#include "main.h"

/**
* rev_string - print a reverse string
*@s: pointer wherever choosen
*
*/
void rev_string(char *s)
{
int len = _strlen(s);
char *end = s + len - 1;
char temp;
while (s < end)
{
temp = *s;
*s = *end;
*end = temp;
s++;
end--;
}
}
