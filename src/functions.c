/*
** functions.c for shell in /home/slejeune/Shell_Programming/PSU_2016_minishell1/src
** 
** Made by Simon
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Thu Jan 19 10:54:22 2017 Simon
** Last update Thu Jan 19 11:53:11 2017 Simon
*/

#include <unistd.h>
#include "my.h"
#include "gnl.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\n')
    i++;
  return (i);
}

char	**str_to_word_tab(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  tab = malloc(sizeof(char *) * (my_strlen(str) + 1));
  while (str[i] != '\0')
    {
      tab[j] = malloc(sizeof(char *) * (my_strlen(str) + 1));
      while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
	  tab[j][k] = str[i];
	  i++;
	  j++;
	}
      if (str[i] == ' ' || str[i] == '\t')
	{
	  i++;
	}
      tab[j][k] = '\0';
      j++;
    }
  tab[j] = NULL;
  return (tab);
}
