/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuntean <amuntean@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:31:02 by amuntean          #+#    #+#             */
/*   Updated: 2023/09/06 22:37:07 by amuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == -2147483648)
		return (0);
	if (nb < 0)
		nb = -nb;
	while (i <= 46340 && (i * i) < nb)
	{
		i++;
	}
	if ((i * i) == nb)
	{
		return (i);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(121));
	return (0);
}*/
