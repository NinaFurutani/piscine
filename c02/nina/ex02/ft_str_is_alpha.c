/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:23:48 by gfurutan          #+#    #+#             */
/*   Updated: 2023/02/20 12:29:58 by gfurutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (!(str[i] >= 'A' && str[i <= 'Z']))
				return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	char a[30] = "5";
	int b;
	b = ft_str_is_alpha(a);
	printf("%i\n", b);
	return(0);
}*/
