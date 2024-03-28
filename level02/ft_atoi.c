#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(const char *str)
{
    int number;

    number = 0;
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
        {
            number *= 10;
            number += *str - 48;
        }
        else
            break;
        str++;

    }
    return (number);
}

int     main(int argc, char **argv)
{
    int my_atoi = ft_atoi(argv[1]);
    int real = atoi(argv[1]);
    printf(" My atoi; %d\n Real atoi; %d", my_atoi, real);
}