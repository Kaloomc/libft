/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <fgarnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:55:43 by fgarnier          #+#    #+#             */
/*   Updated: 2025/10/14 11:14:34 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
		ptr[i++] = 0;
	return (ptr);
}
