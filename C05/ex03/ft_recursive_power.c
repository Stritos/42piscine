/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuntean <amuntean@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:48:14 by amuntean          #+#    #+#             */
/*   Updated: 2023/09/06 20:57:52 by amuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
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
	if (power > 0)
	{
		power--;
		result = nb * ft_recursive_power(nb, power);
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_power(3, 3));
	return (0);
}*/
