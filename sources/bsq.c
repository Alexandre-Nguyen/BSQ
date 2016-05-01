/*
** bsq.c for bsq in /home/nguye_0/rendu/CPE_2015_bsq/sources
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Sat Dec 19 22:14:30 2015 alexandre2 nguyen
** Last update Sun Dec 20 22:25:39 2015 alexandre2 nguyen
*/

#include "../include/fonction.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	calc(char *buffer)
{
  int	col;
  int	i;

  col = calc_col(buffer);
  i = first_point(buffer);
  while (buffer[i] != '\0')
    {
      if (buffer[i] == '\n')
	i = i + 1;
      else if (buffer[i] == '0' || buffer[i - col] == '0' ||
	       buffer[i - 1] == '0' || buffer[i - (col + 1)] == '0')
	{
	  if (buffer[i + 1] == '\n')
	    i = i + 2;
	  else
	    i = i + 1;
	}
      else
	 buffer[i] = small_nb(buffer, col, i);
      i = i + 1;
    }
  square(buffer);
  return (i);
}

int	buffer_nb(char *buffer)
{
  int	i;

  i = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[i] == '.')
	buffer[i] = '1';
      else if (buffer[i] == 'o')
	buffer[i] = '0';
      i = i + 1;
    }
  calc(buffer);
  return (i);
}

int	bsq(int argc, char **argv)
{
  int   op;
  char  buffer[1000000];

  if (argc == 1)
    {
      my_putstr("No file.. Use = ./bsq filepath/\n");
      return (0);
    }
  op = open(argv[1], O_RDONLY);
  read(op, buffer, 1000000);
  buffer_nb(buffer);
  close (op);
  return (op);
}

int	main(int argc, char **argv)
{
  bsq(argc, argv);
  return (0);
}
