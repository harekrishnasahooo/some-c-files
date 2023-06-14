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
            for(j=1;j<=i;j++)
            printf ("#");
            printf("\n");
            sp=sp-1;

      }
      }
/*
   #
   ##
  ###
 ####
#####*/
