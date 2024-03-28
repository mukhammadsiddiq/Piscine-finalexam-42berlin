/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:43:39 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/23 23:53:17 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;
	
	name = argv[1];
	if (argc == 2)
	{
		while (*name)
		{
			write(1, name++, 1);
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}

