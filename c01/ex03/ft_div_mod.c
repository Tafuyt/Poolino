#include <stdio.h>


void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int d;
	d = a / b;
	*div = d;
	int m;
	m = a % b;
	*mod = m;
}

int	main(void)
{
	int a;
	a = 17;
	int b;
	b = 5;
	// I just got confused, so let's create two pointer (to integers):
	int div;
	int mod;
	// we can use uninitialised integers, but not pointers !!!! that's why I changed them to just integers:
	ft_div_mod(a, b, &div, &mod);
	printf("The result of %d / %d is : %d\n", a, b, div);
	printf("and the remainder is : %d\n", mod);
}


