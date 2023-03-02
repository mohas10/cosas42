/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mmemmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagna <msagna@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:08:55 by msagna            #+#    #+#             */
/*   Updated: 2022/11/24 21:26:01 by msagna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned	char *dst2;
	unsigned	char *src2;

	i = 0;
	dst2 = (unsigned	char*) dst;
	src2 = (unsigned	char*) src;

	if (src2 < dst2)
		while (i++ <= len)
			dst2[len - 1] = src2 [len - 1];
	else
		while (len-- > 0)
		{
			dst2[i] = src2[i];
			i++;
		}
	return (dst);
}
