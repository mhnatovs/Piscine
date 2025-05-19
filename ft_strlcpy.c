/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:29:33 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/17 12:31:22 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				length;

	i = 0;
	length = 0;
	while (src[i])
	{
		length++;
		i++;
	}
	if (size == 0)
		return (length);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (length);
}

// #include <stdio.h>
// // #include <string.h>

// int main()
// {
// 	char dest[100]="";
// 	char src[]="qwerty";
// 	ft_strlcpy(dest,src,10);
// 	printf("%s\n",dest);
// 	// strlcpy(dest,src,10);
// 	// printf("%s\n",dest);
// 	return(0);
// }