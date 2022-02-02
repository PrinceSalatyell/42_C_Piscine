/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:15:28 by josanton          #+#    #+#             */
/*   Updated: 2022/01/22 01:16:15 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	i;

	i = size - 1;
	x = 0;
	while (i > 0)
	{
		if (tab[i] < tab[i - 1])
		{
			x = tab[i];
			tab[i] = tab [i - 1];
			tab[i - 1] = x;
			i = size - 1;
			continue ;
		}
		i--;
	}
}