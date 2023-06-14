#include"stdio.h"
int main()
{
  int i,j,n,sp;
    printf ("ener number of rows");
     scanf("%d",&n);
      sp=n-1;
      for(i=1;i<=5;i++)
      {
        for(j=1;j<=sp;j++)
          printf (" ");
            for(j=i;j>=1;j--)
            {printf ("%d",j);
              printf (" ");}
            printf("\n");
            sp=sp-1;

      }
      }
/*
    1
   2 1
  3 2 1
 4 3 2 1
5 4 3 2 1*/
