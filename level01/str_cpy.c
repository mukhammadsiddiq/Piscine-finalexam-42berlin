/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 00:40:42 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/24 00:56:40 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 != '\0')
	{
		*s2 = *s1;
		s2++;
		s1++;
	}
	*s2 = '\0';
	return (s2);
}

int	main(void)
{
	char	s1[] = "Siddiq";
	char	s2[30] = "Hsgcsdhgvdf";
	ft_strcpy(s1, s2);
	printf("S1 = %s\n copied %s\n", s1, s2);
}


		
