#include"stdio.h"
int main()
{
int i,j,n,r;
  printf ("enter .no of rows");

   scanf("%d",&n);
     r=n/2;
       for (i=1;i<=r;i++)
       {
         for (j=1;j<=i;j++)
          printf ("%d",j);
          printf ("\n");
          }
    for (i=r-1;i>=1;i--)
    {
      for (j=1;j<=i;j++)
         {
           printf ("%d",j);
            }
              printf ("\n");
              }}

