/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:59:56 by viroques          #+#    #+#             */
/*   Updated: 2019/10/23 18:26:32 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return ((char*)s1);
	while (s1[i] && i < n - 1)
	{
		j = 0;
		while (s1[i] == s2[j] && j < n - 1)
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char*)&s1[i - j]);
		}
		i++;
	}
	return (NULL);
}
