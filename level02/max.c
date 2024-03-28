#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int     i;
    int     j;
    int     max;

    i = 0;
    j = 0;
    max = tab[0];
    while (*tab && i < len)
    {
        if(tab[j] > max)
        {
            max = tab[j];
            j++;
        }
        else
            j++;
        i++;
    }
    return (max);
}

int main(void)
{
    int tab[] = {1, 4, 5, 2, 8, 5, 3, 9, 4, 15};
    unsigned int len;
    int result;

    len = 10;

    result = max(tab, len);
    printf("%d", result);
}