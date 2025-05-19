/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:07:13 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/06 18:45:40 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	buf;

	buf = *a;
	*a = *b;
	*b = buf;
}

/*#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 10;
	int b = 20;
	int *ap = &a;
	int *bp =&b;
	printf("num is %d\n", *ap);
	printf("num is %d\n", *bp);
	printf("num is %d\n", a);
	printf("num is %d\n", b);
	ft_swap(ap,bp);
	printf("num is %d\n", *ap);
	printf("num is %d\n", *bp);
	printf("num is %d\n", a);
	printf("num is %d\n", b);
	return (0);
}*/