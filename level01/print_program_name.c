#include <unistd.h>

int     main(int argc, char **argv)
{
    int    name;
    int     i;

    i = 0;
    while(argv[1][i])
    {
        i++;
    }

    name = i - 1;
    while (name >= 0)
    {
        write(1, &argv[1][name], 1);
        name--;
    }
}     