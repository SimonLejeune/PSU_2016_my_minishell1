/*
** functions.c for shell in /home/slejeune/Shell_Programming/PSU_2016_minishell1/src
** 
** Made by Simon
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Thu Jan 19 10:54:22 2017 Simon
** Last update Thu Jan 19 11:07:26 2017 Simon
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
