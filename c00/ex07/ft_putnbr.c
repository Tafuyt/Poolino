#include <unistd.h>


void	ft_putnbr(int nb)
{
	int n;
	
	n = (nb % 10) + 48;
	nb /= 10;
	if (nb == 0)
	{
		write(1, &n, 1);
		return ;
	}
	ft_putnbr(nb);
	write(1, &n, 1);
}

int main()
{
	ft_putnbr(9);
	write(1, "\n", 1);
	ft_putnbr(9403);
	write(1, "\n", 1);
	ft_putnbr(22);
}
