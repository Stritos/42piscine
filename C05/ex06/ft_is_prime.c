/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuntean <amuntean@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:37:40 by amuntean          #+#    #+#             */
/*   Updated: 2023/09/06 22:40:12 by amuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (nb % i != 0)
	{
		i++;
	}
	return (i == nb);
}

/*int	main(void)
{
	printf("%d\n", ft_is_prime(11));
	return (0);
}*/
