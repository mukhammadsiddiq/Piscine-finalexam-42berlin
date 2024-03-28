#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    first_word(char *str)
{
    int     i;
    int     j;

    i = 0;
    while (*str)
    {
        if ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
           {
                i++;
           }
        j = i + 1;
        if (str[i]  >= 33 && str[i] <= 126)
        {
            ft_putchar(str[i]);
            if (str[j] == ' ')
            {
                break;
            }

        }

        str++;
    }
}
int     main(int argc, char **argv)
{
    char    *name;

    if (argc != 2)
    {
        write(1, "\n", 1);
    }
    name = argv[1];
    first_word(name);

}