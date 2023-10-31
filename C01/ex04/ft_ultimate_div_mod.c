/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuntean <amuntean@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:37:55 by amuntean          #+#    #+#             */
/*   Updated: 2023/08/22 12:30:57 by amuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num1;
	int	num2;

	num1 = *a;
	num2 = *b;
	*a = num1 / num2;
	*b = num1 % num2;
}
