#include"stdio.h"
int main()
{
    int i,j,r,n;
  printf ("enter no of rows");
    scanf("%d",&n);
      r=n/2;
       for (i=1;i<=n;i++)
          {
            for (j=1;j<=r;j++)
              {
                //if (i<=(n/2))
                  printf ("%d ",j);
              }
              r--;
       if (i<=(n/2))
          printf ("\n");
            }
        r=n/2;
         for (i=1;i<=r;i++)
           {
            for (j=1;j<=i;j++)
              printf("%d ",j);
                printf ("\n");
                }
                }
/*
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
