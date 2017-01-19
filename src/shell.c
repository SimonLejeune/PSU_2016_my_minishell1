/*
** shell.c for shell in /home/slejeune/Shell_Programming/PSU_2016_minishell1/src
** 
** Made by Simon
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Thu Jan 19 10:20:06 2017 Simon
** Last update Thu Jan 19 18:07:13 2017 Simon
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include "my.h"
#include "gnl.h"

int	main(int ac, char **av, char **envp)
{
  char	*s;
  char **tab;

  s = NULL;
  tab = NULL;
  while (1)
    {
      my_putstr("$>");
      s = get_next_line(0);
      tab = str_to_word_tab(s);
    }
}
