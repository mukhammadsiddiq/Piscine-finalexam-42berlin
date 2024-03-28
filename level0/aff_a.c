/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:46:37 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/23 20:50:00 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != '2')
		write(1, "a", 1);
	else 
	{
		while (*argv[1])
		{
			if (*argv[1] == 'a')
			{
				write(1, "a", 1);
				argv[1]++;
				break;
			}
			else
				write(1, "\n", 1);
		}
	}
	return (0);
}*/
#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a\n", 2);
	while (*argv[1])
	{
		if (*argv[1] == 'a')
		{
			write(1, "a\n", 2);
			argv[1]++;
			break;
		}
	}
	write(1, "\n", 1);
	return (0);
}
