/*
** functions.c for shell in /home/slejeune/Shell_Programming/PSU_2016_minishell1/src
** 
** Made by Simon
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Thu Jan 19 10:54:22 2017 Simon
** Last update Thu Jan 19 15:33:27 2017 Simon
*/

#include <unistd.h>
#include <stdlib.h>
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

int	count_words(char *str)
{
  int	i;
  int	n;

  i = 0;
  n = 1;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
	n++;
      i++;
    }
  return (n);
}

int	count_char(char *str)
{
  int	i;
  int	n;

  while (str[i] != ' ' && str[i] != '\0')
    n++;
  return (n);
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
  tab = malloc(sizeof(*tab) * (count_words(str) + 1));
  while (str[i] != '\0')
    {
      tab[j] = malloc(sizeof(**tab) * (count_char(str) + 1));
      while (str[i] != ' ' && str[i] != '\0')
	{
	  tab[j][k] = str[i];
	  i++;
	  k++;
	}
      if (str[i] == ' ')
	{
	  i++;
	}
      j++;
    }
  tab[j+1] = NULL;
  return (tab);
}
