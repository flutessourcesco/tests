#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_print_comb(void)
{
	int	numbers[3] = {48, 48, 48};

	while (numbers[0] <= 57)
	{
		if ((numbers[0] < numbers[1]) && (numbers[1] < numbers[2]))
		{
			ft_putchar(numbers[0]);
			ft_putchar(numbers[1]);
			ft_putchar(numbers[2]);
			if (numbers[0] != 55)
				ft_putchar(',');
			if (numbers[0] != 55)
				ft_putchar(' ');
		}
		if (numbers[2]++ >= 57)
		{
			numbers[2] = 48;
			numbers[1]++;
		}
		if (numbers[1] == 58)
		{
			numbers[1] = 48;
			numbers[0]++;
		}
	}
}

