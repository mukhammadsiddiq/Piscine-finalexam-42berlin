#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c, int i)
{
    int n;

    n = 0;
    while (n <= i)
    {
        write(1, &c, 1);
        n++;
    }
}

int main(void)
{
    char    a;
    int     i;

    i = 97;
    a = 'a';

    while (a <= 'z')
    {
        ft_putchar(a, a - i);
        a++;
    }
    write(1, "\n", 1);
}