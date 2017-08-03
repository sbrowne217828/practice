#include <stdio.h>

int	multhreefive(int n)
{
	int	i;
	int	nbr;


	i = 0;
	nbr = 0;
	while (i < n)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			nbr = nbr + i++;
		else
			i++;
		//printf("I equals: %d\n", i);
		//printf("sum equals: %d\n", nbr);
	}

	return (nbr);
}

int main()
{
	int	scan;
	int	sum;

	scan = 0;
	sum = 0;
	printf("Input number to calculate the sum of the 3 & 5 multiples: \n");
	scanf("%d", &scan);
	sum = multhreefive(scan);
	printf("Sum of input: %d \n", sum);
	return (0);
}
