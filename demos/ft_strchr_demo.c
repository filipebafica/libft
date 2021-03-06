/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_demo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:45:44 by fbafica           #+#    #+#             */
/*   Updated: 2021/10/29 20:12:00 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	const char *s = "up the irons";
	int c = 'i';

	printf("String: %s | c: %c | Return: %s\n", s, c, ft_strchr(s, c));
	return (0);
}
