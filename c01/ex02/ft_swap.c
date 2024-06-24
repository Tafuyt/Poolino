#include <stdio.h>


void	ft_swap(int *a, int *b)
{
	int *c;
	c = a;
	*a = *b;
	*b = *c;
}

int	main(void)
{
	int a;
	a = 10;
	int b;
	b = 20;
	int *p1;
	p1 = &a;
	int *p2;
	p2 = &b;
	printf("a = %d and b = %d\n", a, b);
	ft_swap(p1, p2);
	printf("But now : a = %d and b = %d\n", a, b);
}

