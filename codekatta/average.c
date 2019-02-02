#include<stdio.h>
int main()
{
   long int k,i,a[90];
   scanf("%d",&k);
   if(k>=2&&k<=100000)
   {
      for(i=0;i<k;i++)
      {
         scanf("%d",&a[i]);  
      }    
      if(k%2==1)
      printf("yes");
      else
      printf("no");
   }
   else
   printf("Invalid input");
   return 0;
}
