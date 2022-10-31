/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:20:40 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/29 17:32:07 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	c_start;
	char	*ptr;

	c_start = start;
	ptr = malloc((len + 1) * sizeof(*s));
	if (!ptr)
		return (ptr);
	i = 0;
	if (c_start <= ft_strlen(s))
	{
		while (s[c_start] != '\0' && i < len)
		{
			ptr[i] = s[start];
			start++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}