#include"stdio.h"
int main()
{
  int i,j,n,sp;
    printf ("enter number of rows");
       scanf("%d",&n);
         sp=n-1;
         for (i=1;i<=n;i++)
            {
               for (j=1;j<=sp;j++)
                 printf (" ");
                for (j=1;j<=i;j++)
                  printf ("%d",j);
                  for (j=i-1;j>=1;j--)
                      printf ("%d",j);
                  sp=sp-1;
                   printf ("\n");
                   }
                   }
/*
    1
   121
  12321
 1234321
123454321*/
