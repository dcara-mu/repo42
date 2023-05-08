/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:07:57 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/08 19:56:10 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	nbytes;

	srclen = ft_strlen(src);
	if (dstsize > 0)
	{
		nbytes = dstsize - 1;
		if (nbytes > srclen)
			nbytes = srclen;
		ft_memcpy(dst, src, nbytes);
		dst[nbytes] = '\0';
	}
	return (srclen);
}
