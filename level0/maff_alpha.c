/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:31:29 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/23 23:40:52 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	a;

	a = 'a';

	while (a <= 'z')
	{
		if (a % 2 == 0)
		{
			a = a - 32;
			write(1, &a, 1);
		}
		else
			write(1, &a, 1);
		a++;
	}
}
