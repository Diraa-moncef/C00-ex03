#include<unistd.h>
#include<stdio.h>

void ft_print_numbers(void)
{
	int i =48;
	while(i <= 57)
	{
		write(1,&i,1);
		i++;
	}
}
int main()
{
	ft_print_numbers();
	return 0;
}
