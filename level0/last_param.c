/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:54:06 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/24 00:21:27 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	len;

	len = 0;
	while (argv[argc -1][len])
		len++;

	i = len - 1;
	if (argc >= 2)
	{
		while (argv[argc - 1][i])
		{
			ft_putchar(argv[argc -1][i]);
			i--;
		}
	}
	else
		write(1, "\n", 1);

}
