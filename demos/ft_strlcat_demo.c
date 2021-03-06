/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_demo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:01:15 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/28 01:54:58 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main(void)
{
	const char src[] = "the irons";
	char dst[] = "up ";
	size_t size = 13;

	printf("Before ft_strlcat call | src: %s | dst: %s\n", src, dst);
	printf("After ft_strlcat call | dst: %s | ft_strlcat returns: %ld\n", dst, ft_strlcat(dst, src, size));
	return (0);
}
