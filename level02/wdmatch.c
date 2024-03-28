#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void	wdmatch(char *s1, char *s2)
{
    int     len;
    int     i;

    while (s1[len])
        len++;
    while (*s2 && i < len)
    {
        if (*s2 == s1[i])
            i++;
    }
    if (i == len)
        ft_putstr(s1);
}
int		main(int ac, char **av)
{
	if (ac == 3)s
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}