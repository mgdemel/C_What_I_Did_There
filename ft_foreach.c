
#include <stdio.h>

void ft_putnbr(int x)
{
	printf("%d",x);
}

void ft_foreach(int *str, int length, void (*f)(int))
{
 	int i;
 	i = 0;

 	while  (length > i)
	{
		f(str[i]);
	   	i++;
	}
}
int main(void)
{
	int str[] = {1, 2, 3, 4, 5};
	void (*f)(int);

	f = &ft_putnbr;
	ft_foreach(str, 2, f);
	return (0);
}
