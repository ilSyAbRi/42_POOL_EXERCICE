#include <unistd.h>

void ft_swap(char **s1, char **s2)
{
	char *temp;
	
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	
	int i = 0;
	int j = 0;

	while(tab[i] != NULL)
	{
		j = i;
		while(tab[j] != NULL)
		{
			if(cmp(tab[i],tab[j]) > 0)
				ft_swap(&tab[i],&tab[j]);
		j++;
		}
	i++;
	}

}
