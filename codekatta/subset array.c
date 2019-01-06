#include <stdio.h>

int main()
{
  int a,b,i,c[20],d[20],j;
  scanf("%d%d",&a,&b);
  printf("enter the a elements");
  for(i=0;i<a;i++)
  {
      scanf("%d",&c[i]);
  }
  printf("enter the b elements");
  for(j=0;j<b;j++)
  {
      scanf("%d",&d[j]);
  }
  if(c[i]==d[j])
  {
      printf("yes");
  }
  else
  {
      printf("NO");
  }
}
