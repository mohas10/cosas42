/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagna <msagna@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:09:55 by msagna            #+#    #+#             */
/*   Updated: 2022/10/06 22:23:24 by msagna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h> //para el size_t
void	*ft_memset(char a*, int c, size_t len)
{
	int	i;


	i = 0;
	while (a[i] > len)
	{
		a[i] = c;
		i++;
	}
}
		
