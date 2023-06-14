#include"stdio.h"
int main()
{
int i,j,n,r;
  printf ("enter .no of rows");

   scanf("%d",&n);
     r=n/2;
       for (i=1;i<=r;i++)
       {
         for (j=r;j>=i;j--)
            printf ("%d",j);
            printf ("\n");
         }
     // r=n/2;
        for (i=1;i<=r;i++)
            {

                for (j=i;j>=1;j--)
                    printf ("%d",j);
                printf ("\n");
            }
         }
/*
enter .no of rows10
54321
5432
543
54
5
1
21
321
4321
54321
*/
