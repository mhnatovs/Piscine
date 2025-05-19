/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:35:38 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/17 09:55:08 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	its_a_word(char c)
{
	int	i;

	i = 0;
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (2);
	return (0);
}

char	*strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	pos;

	i = 0;
	pos = 1;
	strlowcase(str);
	while (str[i])
	{
		if (its_a_word(str[i]) == 1 && pos)
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = str[i] - 32;
			pos = 0;
		}
		if (its_a_word(str[i]) == 0)
			pos = 1;
		else
			pos = 0;
		i++;
	}
	return (str);
}
