#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2 && *s1 )
        s1++;
        s2++;
    return (s1 -s2);
}

int     main(void)
{
    char *s = "Ibrokhimov";
    char *s1 = "Ibrokhimov";

    int result  = ft_strcmp(s, s1);
    printf("%d", result);
}