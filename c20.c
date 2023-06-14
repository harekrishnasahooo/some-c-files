#include"stdio.h"
int main()
{
int i,j,n,sp;
  printf ("enter number of rows");
    scanf ("%d",&n);
     sp=0;
     for (i=n;i>=1;i--)
       {
         for (j=1;j<=sp;j++)
           printf("  ");
            for(j=1;j<=i;j++)
              printf ("%d ",j);
              for(j=i-1;j>=1;j--)
                 printf ("%d ",j);
               sp=sp+1;
               printf ("\n");}}

/*
1 2 3 4 5 4 3 2 1
  1 2 3 4 3 2 1
    1 2 3 2 1
      1 2 1
        1
        */
