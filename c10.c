#include"stdio.h"
int main()
{
  int i,j,n,sp;
    printf ("ener number of rows");
     scanf("%d",&n);
     sp=n-n;
     for (i=5;i>=1;i--)
       {
           for (j=1;j<=sp;j++)
             printf (" ");
         for (j=i;j>=1;j--)
           printf ("%d ",j);
           printf ("\n");
           sp=sp+1;
       }
       }
/*
5 4 3 2 1
 4 3 2 1
  3 2 1
   2 1
    1*/
