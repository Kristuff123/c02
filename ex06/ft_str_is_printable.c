/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <kristof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:11:44 by kristof           #+#    #+#             */
/*   Updated: 2024/01/27 20:21:21 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	check_function(int c)
{
	if ((c > 32) && (c <= 126))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
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
	printf("%d\n", ft_str_is_printable("shdfhasöfhahfajfaj"));
	return (0);
}

