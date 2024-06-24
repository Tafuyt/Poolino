#include <unistd.h>



int	my_strlen(const char *str)
{
	int i;
	i = 0;

	while (*str)
	{
		i++;
		++str;
	}
	return i;
}

void	ft_putstr(char *str)
{
	write(1, str, my_strlen(str));
}

int	main(void)
{
	char *str = "Hello Dr.Sou!";
	ft_putstr(str);
}
