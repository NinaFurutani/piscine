/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:16:13 by gfurutan          #+#    #+#             */
/*   Updated: 2023/02/20 14:13:15 by gfurutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 31) || (str[i] == 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	char a[10] = "	";
	int b;

	b = ft_str_is_printable(a);
	printf("%i\n", b);
}*/
