/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:24:46 by myagiz            #+#    #+#             */
/*   Updated: 2022/09/06 23:47:09 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	j;
	int	i;
	int	k;

	j = 1;
	i = 0;
	k = 0;
	while ((str[i] >= '\t' && str[i] <= '\r')
		|| str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = (str[i] - '0') + (k * 10);
		i++;
	}
	return (k * j);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d",ft_atoi("---+-++-12345abc"));

}
*/
