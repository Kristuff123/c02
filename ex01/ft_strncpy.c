/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <kristof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:15:58 by kristof           #+#    #+#             */
/*   Updated: 2024/01/27 22:52:01 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}/*
int	main()
{
	char	destination[20];
	char	source[] = "krzysztof";
	unsigned int	l;
	l = 5;
	
	printf("copy %d letters from %s to destination\n", l, source);
	ft_strncpy(destination, source, l);
	printf("%s\n", destination);
	return 0;
}*/
