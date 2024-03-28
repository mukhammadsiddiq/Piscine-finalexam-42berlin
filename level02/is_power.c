#include <stdio.h>

int     is_power(unsigned int n)
{
    return ((n > 0) && ((n & (n - 1)) == 0));
}
int main (void)
{
    int     n;

    n = 65;
    if (is_power(n) == 1)
        printf("yes");
    else
        printf("no");
}