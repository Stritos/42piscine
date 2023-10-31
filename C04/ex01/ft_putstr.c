/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuntean <amuntean@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:49:18 by amuntean          #+#    #+#             */
/*   Updated: 2023/09/05 13:24:42 by amuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, &*str, 1);
		str++;
	}
}

/*int	main(void)
{
	char array[] = "print me";
	ft_putstr(array);
	return (0);
}*/
