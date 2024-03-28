/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 00:23:29 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/24 00:33:18 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	c;
	int	position = 0;

	c = 'z';

	while (c >= 'a')
	{
		if (position % 2 == 0)
		{
			ft_putchar(c - ('a' - 'A'));
		}
		else
		{
			ft_putchar(c);
		}
		c--;
		position++;
	}
	write(1, "\n", 1);
}

