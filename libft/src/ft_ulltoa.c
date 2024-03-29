/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanta <vsanta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 19:20:37 by pdiedra           #+#    #+#             */
/*   Updated: 2019/12/17 16:26:38 by basylbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulltoa(unsigned long long int n)
{
	int		i;
	int		j;
	char	nbr1[20];
	char	*nbr2;

	i = 0;
	j = 0;
	while (n > 9)
	{
		nbr1[i++] = '0' + (n % 10);
		n = n / 10;
	}
	nbr1[i++] = '0' + n;
	if ((nbr2 = (char*)malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	nbr2[i] = '\0';
	while (i--)
		nbr2[i] = nbr1[j++];
	return (nbr2);
}
