#include <stdio.h>

char *ft_strrev(char *str)
{
    int     i;
    int     len;
    char    c;

    while(str[len])
        len++;
    len = len - 1;

    i = 0;
    while (i < ((len + 1) / 2))
    {
        c = str[i];
        str[i] = str[len - i];
        str[len - i] = c;
        i++;
    }
    return (str);
}
int main(void){
    char s[] = "Mukhammad";
    printf("%s", ft_strrev(s));
}