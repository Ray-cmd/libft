/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:27:19 by lray              #+#    #+#             */
/*   Updated: 2023/09/06 02:43:02 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	res;

	if (s == NULL)
		return (-1);
	res = 0;
	while (s[res] != '\0')
		res++;
	return (res);
}
