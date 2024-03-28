#include <unistd.h>

void    rev_word(char *str)
{
    int     i;
    int     len;

    while (str[i])
        i++;

    len = i - 1;
    while(len >= 0)
    {
        write(1, &str[len], 1);
        --len;
    }
        
}
int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    rev_word(argv[1]);
    
}