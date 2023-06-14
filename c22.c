#include"stdio.h"
int main()
{
  int i,j,n,sp;
    printf ("enter number of rows ");
     scanf ("%d",&n);
     sp=2*n-2;
     for (i=1;i<=n;i++)
      {
        for (j=1;j<=i;j++)
           printf ("%d",j);
            for (j=1;j<=sp;j++)
              printf (" ");
               for (j=i;j>=1;j--)
                 printf ("%d",j);
                     sp=sp-2;
                      printf ("\n");
                      }}
/*
1        1
12      21
123    321
1234  4321
1234554321
*/
