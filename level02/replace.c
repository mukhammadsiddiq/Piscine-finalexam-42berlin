#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    if (argc != 4)
        write(1, "\n", 1);
    i = 0;
    while (argv[1][i])
    {
        if (argv[1][i] == argv[2][0])
        {
            argv[1][i] = argv[3][i];
            write(1, &argv[1][i], 1);
        }
        else
            write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
}