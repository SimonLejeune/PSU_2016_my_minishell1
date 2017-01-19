/*
** shell.c for shell in /home/slejeune/Shell_Programming/PSU_2016_minishell1/src
** 
** Made by Simon
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Thu Jan 19 10:20:06 2017 Simon
** Last update Thu Jan 19 11:27:55 2017 Simon
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
  
  while (1)
    {
      my_putstr("$>");
      s = get_next_line(0);
      printf("%s\n", s);
    }
}
