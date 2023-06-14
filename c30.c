#include"stdio.h"
int main()
{
  int i,j,n,sp,r;
 printf ("enter nuber of rows ");
  scanf("%d",&n);
  r=n/2;
    sp=2*r-2;
    for (i=1;i<=r;i++)
      {
        for(j=1;j<=i;j++)
            printf ("%d ",j);
         for (j=1;j<=sp;j++)
            printf ("  ");
             for (j=i;j>=1;j--)
                   printf ("%d ",j);
                    sp=sp-2;
                     printf ("\n");}
                     sp=0;
    for (i=r;i>=1;i--)
    {
        for (j=1;j<=i;j++)
            printf ("%d ",j);
         for (j=1;j<=sp;j++)
            printf ("  ");
          for (j=i;j>=1;j--)
            printf  ("%d ",j);
          sp=sp+2;
           printf ("\n");
    }
}
/*
enter nuber of rows 4
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1
1 2 3 4 4 3 2 1
1 2 3     3 2 1
1 2         2 1
1             1 the actual op*/

/*
1       1
1 2     2 1
1 2 3   3 2 1
1 2 3 4 4 3 2 1
1 2 3 4 4 3 2 1
1 2 3   3 2 1
1 2     2 1
1       1

if %d ,is preasent*/



