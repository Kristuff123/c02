/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <kristof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:47:28 by kristof           #+#    #+#             */
/*   Updated: 2024/01/27 19:59:48 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	check_function(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] !='\0')
	{
		if (!(check_function(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	printf("%d\n", ft_str_is_lowercase("hagsfhahfagshasj"));
	printf("%d\n", ft_str_is_lowercase("AAGGAGHAG"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("1214121"));
	return (0);
}
