#include <stdio.h>

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i = 0;
	int count = 0;

	while(i < length)
	{
		if((*f)(tab[i]) == 1)
		count++;	
	i++;
	}
	return count;
}

int is_1_or_0(char *str)
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

	char *arr[] = {"iliass","syab0ri","haha"};
	int(*f)(char*) = &is_1_or_0;
	
	printf("%d\n",ft_count_if(arr,3,f));
}
