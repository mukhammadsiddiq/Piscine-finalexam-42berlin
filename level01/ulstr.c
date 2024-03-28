#include <unistd.h>
#include <stdio.h>

void    ulstr(char  *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str -= 32;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str += 32;
        }
        str++;
    }
}
int main(int argc, char **argv)
{
    char *str;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    str = argv[1];
    ulstr(str);
    while (*str)
    {
        write(1, str++, 1);
    }
    write(1, "\n", 1);
}