#include<stdio.h>
void
main ()
{
  int a, b, i, j, c[10], x;
  scanf ("%d %d", &a, &b);
  for (i = 0; i < a; i++)
    {
      scanf ("%d", &c[i]);
    }
  for (i = 0; i < a; i++)
    {
      for (j = 0; j < a; j++)
	{
	  if (i != j)
	    {
	      if (c[i] + c[j] == b)
		{
		  x = 1;
		  break;
		}
	    }
	}
    }
  if (x == 1)
    {
      printf ("yes");
    }
  else
    {
      printf ("No");
    }

