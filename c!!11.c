#include"stdio.h"
int main()
{
int i,j,r,n;
  printf ("enter no of rows");
    scanf("%d",&n);
      r=n/2;
       for (i=r;i>=1;i--)
          {
            for (j=1;j<=i;j++)
            {
                  printf ("%d ",j);
              }
          printf ("\n");
            }
         for (i=1;i<=r;i++)
           {
            for (j=1;j<=i;j++)
              printf("%d ",j);
                printf ("\n");
                }}

/*
enter no of rows10
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
