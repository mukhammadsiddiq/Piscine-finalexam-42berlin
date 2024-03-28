#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rotone(char *str)
{
    while (*str)
    {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        {
            if ((*str == 'z') || (*str == 'Z'))
                *str -= 26;
            *str += 1;
        }
        ft_putchar(str[0]);
        str++;
    }
    write(1, "\n", 1);
}
int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    rotone(argv[1]);
}