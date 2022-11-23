#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int j;

	i = -1;
	while (++i < 99)
	{
		j = i;
		while (++j <= 99)
		{
			ft_putchar((i / 10) + 48);
			ft_putchar((i % 10) + 48);
			ft_putchar(' ');
			ft_putchar((j / 10) + 48);
			ft_putchar((j % 10) + 48);
			if (i < 98)
				write(1, ", ", 2);
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	ft_putchar('\n');
}
