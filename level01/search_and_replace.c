/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:31:08 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/24 15:31:14 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int     i;

    i = 0;
    if (argc != 4)
        write(1, "\n", 1);

    while (argv[1][i])
    {
        if (argv[1][i] == argv[2][0])
        {
            argv[1][i] = argv[3][0];
        }
        ft_putchar(argv[1][i]);
        i++;
    }
    write(1, "\n", 1);
}
