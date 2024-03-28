#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;
    int k;
    int seen[256] = {0};
    if (argc != 3)
        write(1, "\n", 1);
    k = 1;
    while(argv[k])
    {
        i = 0;
        while(argv[k][i])
        {
            if(!(seen[(unsigned char)argv[k][i]]))
            {
                ft_putchar(argv[k][i]);
                seen[(unsigned char)argv[k][i]] = 1;
            }
            i++;
        }
        k++;
    }
    write(1, "\n", 1);
}