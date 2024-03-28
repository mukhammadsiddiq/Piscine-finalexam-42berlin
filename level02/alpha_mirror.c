#include <unistd.h>

void alpha_mirror(char *str)
{
    int     i;
    int    letter;

    i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            letter = 155 - str[i];
            write(1, &letter, 1);
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            letter = 219 - str[i];
            write(1, &letter, 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    alpha_mirror(argv[1]);
}