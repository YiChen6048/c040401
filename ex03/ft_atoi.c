/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yi-ctan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 17:27:43 by yi-ctan           #+#    #+#             */
/*   Updated: 2025/03/16 17:48:21 by yi-ctan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str [i] == '\f' || str[i] == '\r')
		i++;

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return result * sign;
}

int main()
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));  // 输出: -1234
    	printf("%d\n", ft_atoi("   42"));              //output: 42
    	printf("%d\n", ft_atoi(" -+--+987 "));         // 输出: -987
    	printf("%d\n", ft_atoi("   +456def "));        // 输出: 456
    	printf("%d\n", ft_atoi(" --123"));             //output:-123
	return(0);
}
