#include <studio.h>
#include <stdio.h>

main int
{
int n, i, t;
n = 0;
i = n + 1;
t = i + 1;
while (n <= 7)
{
    while (i <= 8)
    {
        while (t <= 9)
        {
            putchar(n + '0');
            putchar(i + '0');
            putchar(t + '0');
            if (n != 7 || i != 8 || t != 9)
            {
                putchar(',');
                putchar(' ');
            }
            t++;
        }
        i++;
        t = i + 1;
    }
    n++;
    i = n + 1;
}
putchar('\n');
return (0);

