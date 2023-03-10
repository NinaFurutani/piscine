/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:00:37 by gfurutan          #+#    #+#             */
/*   Updated: 2023/02/07 15:55:19 by gfurutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= '0')
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
/*int main(void)
{
	ft_is_negative(-1);
	return(0);
}*/
