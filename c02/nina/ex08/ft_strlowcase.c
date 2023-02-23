/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:59:00 by gfurutan          #+#    #+#             */
/*   Updated: 2023/02/20 10:30:27 by gfurutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
		str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	a[10] = "ABCD";

	printf ("%s", ft_strlowcase(a));
	return (0);
}*/
