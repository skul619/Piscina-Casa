#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b > 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;
	int	y;
	int	z;

	a = 4;
	b = 2;
	ft_div_mod(a, b, y, z);
	printf("%d\n%d\n", &y, &z);
}*/