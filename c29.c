#include"stdio.h"
int main()
{
    int i,j,n,r,sp;
 printf ("enter no of rows");
  scanf ("%d",&n);
   r=n/2;
    sp=0;
    for (i=1;i<=r;i++)
      {
       for (j=1;j<=sp;j++)
           printf (" ");
            for (j=i;j<=r;j++)
              printf ("%d",j);
               sp++;
               printf ("\n");
            }
             sp=r-1;
              for (i=r;i>=1;i--)
                {
                  for (j=1;j<=sp;j++)
                    printf (" ");
                  for(j=i;j<=r;j++)
                     printf ("%d",j);
                      sp--;
                      printf ("\n");
                        }}
