#include <stdio.h>


void	ft_ft(int *nbr)
{
	*nbr=42;
}

int	main(void)
{
	int a;
	a = 19;
	printf("a = %d\n", a);
	int *p;
	p = &a;
	ft_ft(p);
	printf("Now a = %d\n", a);
}
