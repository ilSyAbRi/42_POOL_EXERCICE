#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i = 0;
	
	while(i < length)
	{
		(*f)(tab[i]);
	i++;
	}
}

/*void multiple_2(int nb)
{
	nb = nb * 2;
	printf("%d\n",nb);
}

int main()
{
	int tab[] = { 10, 20, 30 };
	
	ft_foreach(tab,3,&multiple_2);
}*/
