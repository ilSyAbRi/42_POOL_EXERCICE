#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int *arr = malloc(length * sizeof(int));

	if(arr == NULL)
		return NULL;

	int i = 0;

	while(i < length)
	{
		arr[i] = (*f)(tab[i]);
	i++;
	}
	return arr;
}

int nb_double(int nb)
{
	nb = nb * 2;
	return nb;
}

int main()
{
	int arr[] = {2,4,8};
	
	int(*f)(int) = &nb_double;
	
	int *ptr = ft_map(arr,3,f);
	
	int i = 0;

	while(i < 3)
	{
		printf("%d\n",ptr[i]);
	i++;
	}

	return 0;
}
