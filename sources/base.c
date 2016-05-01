/*
** base.c for base in /home/nguye_0/rendu/CPE_2015_bsq/sources
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Sun Dec 20 16:48:31 2015 alexandre2 nguyen
** Last update Sun Dec 20 20:20:33 2015 alexandre2 nguyen
*/

#include "../include/fonction.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	first_line_size(char *buffer)
{
  int   i;

  i = 0;
  while (buffer[i] != '\n')
    {
      i = i + 1;
    }
  i = i + 1;
  return (i);
}

int	calc_width(char *buffer)
{
  int   i;
  int   line;

  line = 0;
  i = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[i] == '\n')
        {
          line = line + 1;
        }
      i = i + 1;
    }
  line = line - 1;
  return (line);
}

int	calc_col(char *buffer)
{
  int   i;
  int   tmp;

  i = 0;
  while (buffer[i] != '\n')
    {
      i = i + 1;
    }
  tmp = i;
  i = i + 1;
  while (buffer[i] != '\n')
    {
      i = i + 1;
    }
  i = i - tmp;
  return (i);
}

int	first_point(char *buffer)
{
  int   i;

  i = 0;
  while (buffer[i] != '\n')
    {
      i = i + 1;
    }
  i = i + 1;
  while (buffer[i] != '\n')
    {
      i = i + 1;
    }
  i = i + 2;
  return (i);
}
