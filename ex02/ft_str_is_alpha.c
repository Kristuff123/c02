/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <kristof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:41:31 by kristof           #+#    #+#             */
/*   Updated: 2024/01/27 15:20:18 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	check_function(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_function(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
printf("%d\n", ft_str_is_alpha("adaasadadads1"));
return (0);
}*/
