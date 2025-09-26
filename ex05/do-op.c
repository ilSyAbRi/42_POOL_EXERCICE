#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while(str[i] == ' ' || str[i] == '\t')
		i++;

	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = sign * -1;

	i++;
	}

	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
	i++;
	}

	return sign * result;
}

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putnbr(int nb)
{

	int min_int = 1 << (sizeof(int) * 8 - 1);

	if(min_int == nb)
	{
		write(1,"-2147483648",11);
		return;
	}

	if(nb < 0)
	{
		nb = nb * -1;
		write(1,"-",1);
	}
	if(nb / 10 != 0)
		ft_putnbr(nb / 10);
	
	ft_putchar(nb % 10 + '0');
}

void add(int nb1, int nb2)
{
	ft_putnbr(nb1 + nb2);
}

void min (int nb1, int nb2)
{
	ft_putnbr(nb1 - nb2);
}

void mult (int nb1 , int nb2)
{
	ft_putnbr(nb1 * nb2);
}

void div (int nb1 , int nb2)
{
	if(nb2 == 0)
		write(1,"Stop : division by zero",23);
	else
		ft_putnbr(nb1 / nb2);
	
}

void mod (int nb1, int nb2)
{
	if(nb2 == 0)
		write(1,"Stop : modulo by zero",21);
	else
		ft_putnbr(nb1 % nb2);
}

int main(int argc , char *argv[])
{
	
	if(argc == 4)
	{
		int nb1 = ft_atoi(argv[1]);
		int nb2 = ft_atoi(argv[3]);

		void(*operation[5])(int,int) = {&add,&min,&mult,&div,&mod};
		char op[5] = "+-*/%";		
	
		int i = 0;
		while(argv[2][0] != op[i])
		{
		       i++;
		       if(i == 5)
		       {
			       write(1,"0\n",2);
			return 0;
		       }
		}	
			operation[i](nb1,nb2);

	write(1,"\n",1);
	}
}
