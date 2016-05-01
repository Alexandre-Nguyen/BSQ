/*
** calc.c for calc in /home/nguye_0/rendu/CPE_2015_bsq/sources
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Sun Dec 20 16:54:17 2015 alexandre2 nguyen
** Last update Sun Dec 20 20:24:53 2015 alexandre2 nguyen
*/

#include "../include/fonction.h"

char	small_nb(char *buffer, int col, int i)
{
  if (buffer[i - 1] <= buffer[i - col] && buffer[i - 1] <=
      buffer[i - (col + 1)])
    {
      return (buffer[i - 1] + 1);
    }
  else if (buffer[i - col] <= buffer[i - 1] && buffer[i - col] <=
           buffer[i - (col + 1)])
    {
      return (buffer[i - col] + 1);
    }
  else if (buffer[i - (col + 1)] <= buffer[i - 1] && buffer[i - (col + 1)] <=
           buffer[i - col])
    {
      return (buffer[i - (col + 1)] + 1);
    }
  return (buffer[i]);
}

char	big_nb(char *buffer)
{
  char  tmp;
  int   i;

  i = first_line_size(buffer);
  tmp = '0';
  while (buffer[i] != '\0')
    {
      if (buffer[i] > tmp)
        {
          tmp = buffer[i];
        }
      i = i + 1;
    }
  return (tmp);
}

int	final_display(char *buffer)
{
  int   i;

  i = first_line_size(buffer);
  while (buffer[i] != '\0')
    {
      my_putchar(buffer[i]);
      i = i + 1;
    }
  return (i);
}

int	square_display(char *buffer, int big, char bignb)
{
  t_square      square;

  square.col = 0;
  square.true_col = calc_col(buffer);
  square.nb = bignb - 48;
  square.i = first_line_size(buffer);
  while (square.i != big)
    {
      square.i = square.i + 1;
    }
  square.limit = square.i - square.nb;
  while (square.col != square.nb)
    {
      square.limit = square.i - square.nb;
      square.tmp = square.i;
      while (square.i != square.limit)
        {
          buffer[square.i] = 'x';
          square.i = square.i - 1;
        }
      square.i = square.tmp - square.true_col;
      square.col = square.col + 1;
    }
  final_display(buffer);
  return (square.col);
}

int	square(char *buffer)
{
  char  bignb;
  int   i;
  int   big;

  i = first_line_size(buffer);
  bignb = big_nb(buffer);
  big = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[i] != '0')
        {
          if (buffer[i] == '\n')
            buffer[i] = '\n';
          else if (buffer[i] == bignb && big == 0)
            big = i;
          else
            buffer[i] = '.';
        }
      else if (buffer[i] == '0')
        buffer[i] = 'o';
      i = i + 1;
    }
  square_display(buffer, big, bignb);
  return (big);
}
