#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	len = len + 1;
	new = malloc(sizeof(char) * len);
	if (!(new))
		return (new);
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

int	main(int argc, char **argv)
{
	char	*new;

	if (argc != 2)
	return (0);
	new = ft_strdup(argv[1]);
	printf("%s", new);
}
