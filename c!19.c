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
           printf(" ");
            for(j=i;j>=1;j--)
              printf ("*");
              for(j=1;j<i;j++)
                 printf ("*");
               sp=sp+1;
               printf ("\n");}}
/*
*********
 *******
  *****
   ***
    *
    */
