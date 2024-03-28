#include <unistd.h>

void    reverse(char*str)
{
    int i = 0;
    int len;

    while(str[i])
        i++;
    len = i - 1;
    while(len >= 0)
    {
        while(str[len])
        {
            write(1, &str[len], 1);
            len--;
        }
    }
}
int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
    {
        reverse(argv[1]);
    }
}