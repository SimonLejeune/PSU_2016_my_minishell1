/*
** shell.c for shell in /home/slejeune/Shell_Programming/PSU_2016_minishell1/src
** 
** Made by Simon
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Thu Jan 19 10:20:06 2017 Simon
** Last update Thu Jan 19 11:12:23 2017 Simon
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include "my.h"
#include "gnl.h"

int	main(int ac, char **av, char **envp)
{
  while (1)
    {
      my_putstr("$>");
      get_next_line(0);
    }
}
