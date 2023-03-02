/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagna <msagna@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:40:30 by msagna            #+#    #+#             */
/*   Updated: 2023/01/20 21:44:23 by msagna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	char	*pTR;
	size_t i;
	size_t result;
	size_t dst_len;
	size_t src_len;

	pTR = (char*) src; 
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;

	if (dstsize > dst_len)
	result = dst_len + src_len;
	
	else
	result = src_len + dstsize;
	
	while (pTR[i] && (dst_len + 1) < dstsize)
		{
			dst[dst_len] = pTR[i];
			dst_len++;
			i++;
		}
	dst[dst_len] = '\0';
	return (result);
}

