/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuntean <amuntean@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:37:19 by amuntean          #+#    #+#             */
/*   Updated: 2023/09/05 18:07:02 by amuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char source[15] = "World";
	char destination[100] = "Hello ";
    unsigned number = 3;
	printf("Destination: %s\n", destination);
	printf("Source: %s\n", source);
    printf("Characters to append: %d\n", number);
	printf("Destination + Source: %s\n", ft_strncat(destination, source, number));
	return (0);
}*/
