/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuntean <amuntean@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:39:12 by amuntean          #+#    #+#             */
/*   Updated: 2023/08/31 16:28:34 by amuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		count++;
		if (*s1 == *s2)
		{
			if (*s1 == '\0')
			{
				return (0);
			}
			s1++;
			s2++;
		}
		else if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
	}
	return (0);
}

/*int	main(void)
{
	char s1[] = "test";
	char s2[] = "test";
	printf("Output: %d", ft_strncmp(s1, s2, 4));
	return (0);
}*/
