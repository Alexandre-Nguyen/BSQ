/*
** fonction.h for fonction in /home/nguye_0/rendu/CPE_2015_bsq/include
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Tue Dec  1 14:50:26 2015 alexandre2 nguyen
** Last update Sun Dec 20 21:00:08 2015 alexandre2 nguyen
*/

#ifndef FONCTION_H_
# define FONCTION_H_

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void	my_putchar(char c);
int	first_line_size(char *buffer);
int	calc_width(char *buffer);
int	calc_col(char *buffer);
int	first_point(char *buffer);
char	small_nb(char *buffer, int col, int i);
char	big_nb(char *buffer);
int	final_display(char *buffer);
int	square_display(char *buffer, int big, char bignb);
int	square(char *buffer);
int	calc(char *buffer);
int	buffer_nb(char *buffer);
int	bsq(int argc, char **argv);
void	my_putstr(char *str);

typedef struct		s_square
{
  int	i;
  int	limit;
  int	nb;
  int	tmp;
  int	col;
  int	true_col;
}			t_square;

#endif
