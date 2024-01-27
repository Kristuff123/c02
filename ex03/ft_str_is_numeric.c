/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <kristof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:40:40 by kristof           #+#    #+#             */
/*   Updated: 2024/01/27 22:55:18 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	check_function(int i)
{
	if ((i >= '0') && (i <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	n;
	
	n = 0;
	while (str[n] !='\0')
	{
		if (!(check_function(str[n])))
		{
			return (0);
		}
		n++;
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_str_is_numeric("122133313123"));
	return (0);
}*/
