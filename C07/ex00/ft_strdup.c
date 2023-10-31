/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuntean <amuntean@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:05:50 by amuntean          #+#    #+#             */
/*   Updated: 2023/09/07 12:31:30 by amuntean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*array;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	array = (char *)malloc(sizeof(len + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

/*int	main(void)
{
	char array[] = "yes sirrr LFGGGG";
	printf("%s\n", ft_strdup(array));
	return (0);
}*/
