/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:03:05 by gfurutan          #+#    #+#             */
/*   Updated: 2023/02/22 17:07:27 by gfurutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
	j = 0;
		while (str[i + j] == to_find[j] && str[i] != '\0')
		j++;
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
	i++;
	}
	return (0);
}
/*
int main()
{
char *str = "eu amo batata frita";
char *find = "batata";

//printf("%s", str);
printf("%s", ft_strstr(str, find));     
}*/
