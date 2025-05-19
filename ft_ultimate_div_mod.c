/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:55:22 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/08 20:15:58 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buf;

	buf = *a;
	*a = buf / *b;
	*b = buf % *b;
}
/*int main(void)
{
	int ap = 10;
	int bp = 7;
	printf("%d\n",ap);
	printf("%d\n",bp);
	ft_ultimate_div_mod(&ap,&bp);
	printf("%d\n",ap);
	printf("%d\n",bp);
}*/