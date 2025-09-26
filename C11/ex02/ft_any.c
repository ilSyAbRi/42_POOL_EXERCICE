#include <stdio.h>
#include <unistd.h>

int ft_any(char **tab, int(*f)(char*))
{
	
	int i = 0;
	
	while(tab[i] != NULL)
	{
		if((*f)(tab[i]) != 0)
			return 1;
	i++;
	}
	return 0;
}

int is0or1(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] == '0')
			return 0;
	i++;
	}
	return 1;
}

int main()
{
	char *arr[] = {"0lsf", "0f" , "i0s" ,NULL};
	
	int (*f)(char*) = &is0or1;

	printf("%d\n",ft_any(arr,f));
}
