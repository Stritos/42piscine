/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuntean <amuntean@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:38:01 by amuntean          #+#    #+#             */
/*   Updated: 2023/09/06 20:47:29 by amuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = power;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nb *= i;
		power --;
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 5));
	return (0);
}*/
