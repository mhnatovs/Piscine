/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:04:39 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/13 10:53:44 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		if (min != i)
		{
			temp = tab[min];
			tab[min] = tab[i];
			tab[i] = temp;
		}
		i++;
	}
}

/*
int main(void)
{
int arr[]={1,6,4,2,5,3};
ft_sort_int_tab(arr,6);

return 0;
}*/