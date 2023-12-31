/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:51:52 by hbenaddi          #+#    #+#             */
/*   Updated: 2023/10/19 17:19:23 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memset est pour qui est utilisée pour initialiser un bloc de mémoire avec une valeur spécifique. */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ptr;

	ptr = b;
	while (len--)
		*(unsigned char *)(ptr++) = (unsigned char)c;
	return (b);
}