#include <unistd.h>
#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i = 0;
	int count_up = 0;
	int count_down = 0;

	while(i < length - 1)
	{
		if(f(tab[i],tab[i + 1]) > 0)
			count_down++;
	
		else if(f(tab[i],tab[i + 1]) < 0)
			count_up++;
	i++;
	}

	if(count_down != 0 && count_up != 0)
		return 0;
	else
		return 1;
}

int check_sort(int nb1 , int nb2)
{
	return nb1 - nb2;
}

int main()
{
	int arr[] = {2,3,4,5};

	int(*f)(int,int) = &check_sort;	
	
	printf("%d\n",ft_is_sort(arr,4,f));	
}
