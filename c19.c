#include"stdio.h"
int main()
{
int i,j,n,sp;
  printf ("enter number of rows");
    scanf ("%d",&n);
      sp=n-n;
      for (i=5;i>=1;i--)

        {
          for (j=1;j<=sp;j++)
            printf ("  ");
              for (j=(2*i)-1;j>=1;j--)
                 printf (" *");
                   sp=sp+1;
                  printf ("\n");
                  }

  }
  /*
  * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
         */
