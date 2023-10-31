/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuntean <amuntean@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:34:40 by amuntean          #+#    #+#             */
/*   Updated: 2023/09/06 12:39:08 by amuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < argc && argc >= 1)
	{
		while (argv[i][j] != '\0')
			j++;
		write (1, argv[i], j);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
