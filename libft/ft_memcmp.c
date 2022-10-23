/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:04:36 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/19 15:27:03 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *s1, const void *s2, size_t n)
{
	char	*cs1;
	char	*cs2;
	int		i;

	i = 0;
	cs1 = (char *)s1;
	cs2 = (char *)s2;
	while (n != 0 && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}