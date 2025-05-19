/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:31:44 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/12 14:52:17 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buf;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		buf = tab [i];
		tab[i] = tab[j];
		tab[j] = buf;
		j--;
		i++;
	}
}
