/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarras <jkarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:01:55 by jkarras           #+#    #+#             */
/*   Updated: 2023/08/20 18:33:16 by jkarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);
void	print_rectangle(int x, int y, int i, int j);

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1, " Both parameters have to be positive", 40);
	}
	else
	{
		print_rectangle(x, y, 1, 1);
	}
}

void	print_rectangle(int x, int y, int i, int j)
{
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && y > 1 && x > 1))
				ft_putchar('/');
			else if ((j == x && i == 1) || (i == y && j == 1))
				ft_putchar('\\');
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
