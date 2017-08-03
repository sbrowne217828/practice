/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fib_even_sum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 23:16:44 by scotty            #+#    #+#             */
/*   Updated: 2017/08/03 00:11:48 by scotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*calculate the sum of all even fibonacci numbers less than 4 million*/
#include <stdio.h>

double	fib_nbr(int n)
{
	int		i;
	int		a;
	int		b;
	int		nbr;

	i = 0;
	a = 1;
	b = 2;
	nbr = 2;
	while (n > 1 && i <= 4000000)
	{
		i = a + b;
		a = b;
		b = i;
		if (i % 2 == 0)
		{
			nbr = nbr + i;
			n--;
		}
		else
			n--;
	}
	return (nbr);
}

int		main()
{
	int		scan;
	int		fib_sum;
	
	scan = 0;
	fib_sum = 0;
	printf("Enter fibonacci sequence position - three: \n");
	scanf("%d", &scan);
	fib_sum = fib_nbr(scan);
	printf("The sum of the even fib numbers up to the\npreviously entered sequence position equals: %d\n", fib_sum);
	return (0);
}
