// Assignment name  : flood_fill
// Expected files   : *.c, *.h
// Allowed functions: -
// --------------------------------------------------------------------------------

// Write a function that takes a char ** as a 2-dimensional array of char, a
// t_point as the dimensions of this array and a t_point as the starting point.

// Starting from the given 'begin' t_point, this function fills an entire zone
// by replacing characters inside with the character 'F'. A zone is an group of
// the same character delimitated horizontally and vertically by other characters
// or the array boundry.

// The flood_fill function won't fill diagonally.

// The flood_fill function will be prototyped like this:
//   void  flood_fill(char **tab, t_point size, t_point begin);

// The t_point structure is prototyped like this:

  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

  void fill(char **tab, t_point cur, t_point size, char to_fill)
  {
    if (tab[cur.y][cur.x] != to_fill || cur.x < 0 || cur.x >= size.x || cur.y < 0 || cur.y >= size.y)
        return;
    tab[cur.y][cur.x] = 'F';

    fill(tab, (t_point){cur.x -1, cur.y},size, to_fill);
    fill(tab, (t_point){cur.x +1, cur.y},size, to_fill);
    fill(tab, (t_point){cur.x, cur.y - 1},size, to_fill);
    fill(tab, (t_point){cur.x, cur.y + 1},size, to_fill);
  }

  void flood_fill(char **tab, t_point size, t_point begin)
  {
    fill(tab,size, begin, tab[begin.y][begin.x]);
  }