#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1,char *s2)
{
	int i = 0;
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;

	return s1[i] - s2[i];
}

void ft_swap(char **str1 , char **str2)
{
	char *temp;
	
	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void ft_sort_string_tab(char **tab)
{

	int i = 0;
	int j = 0;

	while(tab[i] != NULL)
	{
		j = i;
		while(tab[j] != NULL)
		{
			if(ft_strcmp(tab[i],tab[j]) > 0)
				ft_swap(&tab[i],&tab[j]);	
		j++;
		}	
	i++;
	}

}

void ft_putstr(char **str)
{
	int i = 0;
	int j = 0;

	while(str[i] != NULL)
	{
		j = 0;
		while(str[i][j] != '\0')
		{
			write(1,&str[i][j],1);
		j++;
		}
		write(1,"\n",1);
	i++;
	}
}

int main(int argc , char *argv[])
{
	if(argc > 1)
	{
		ft_sort_string_tab(argv);
		ft_putstr(argv);
	}	
}
