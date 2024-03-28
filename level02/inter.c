#include <unistd.h>

void    inter(char *str, char *str1)
{
    int     i;
    int     j;
    int     data[256] = {0};

    i = 0;
    while(str[i])
    {
        j = 0;
        while(str1[j])
        {
            if (str[i] == str1[j])
            {
                if (data[(int)str[i]] == 0)
                {
                    data[(int)str[i]] = 1;
                    write(1, &str1[j], 1);
                }
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
}

int     main(int argc, char *argv[])
{
    if (argc != 3)
        write(1, "\n", 1);
    inter(argv[1], argv[2]);
    
}