#include"stdio.h"
int main()
{
  int i,j,n,sp;

  printf ("enter numbrer of rows ");
   scanf("%d",&n);
     sp=0;
     for (i=n;i>=1;i--)
       {
         for (j=1;j<=sp;j++)
           printf (" ");
         for (j=1;j<=i;j++)
            printf ("%d ",j);
             //sp++;
             printf ("\n");
              sp++;}}
/*
enter numbrer of rows 5
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1*/
