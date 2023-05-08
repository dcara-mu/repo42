/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:54:25 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/08 19:53:58 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*pd;
	char	*ps;

	pd = (char *)dst;
	ps = (char *)src;
	if (!dst && !src)
		return (0);
	if (pd < ps)
		while (n--)
			*pd++ = *ps++;
	else
	{
		pd += n;
		ps += n;
		while (n--)
			*--pd = *--ps;
	}
	return (dst);
}
