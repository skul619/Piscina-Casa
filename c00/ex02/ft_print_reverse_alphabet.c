#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 122;
	while (c > 96)
	{
		ft_putchar(c);
		c--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
}
