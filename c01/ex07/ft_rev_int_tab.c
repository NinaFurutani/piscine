/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:15:41 by gfurutan          #+#    #+#             */
/*   Updated: 2023/02/15 09:53:11 by gfurutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while (i < (size / 2))
	{
		a = tab[i];
		tab[i] = tab [size - 1 - i];
		tab [size -1 - i] = a;
		i++;
	}
}
	//a = *tab;
	//*tab = size;
	//size = a;

/*int	main()
{
	int tab[4] = { 1,4,6,9 };
	int size = 4;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}*/
