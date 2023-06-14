#include"stdio.h"
int main()
{
  int i,j,n,sp,r,x,nu=1,y;
    printf ("enter no of rows");
      scanf ("%d",&n);
        sp=n-1;
         for (i=1;i<=n;i++)
             {
                 for (j=1;j<=sp;j++)
                  printf ("  ");
                for (j=1;j<=2*i-1;j++)
                   {
                       if (j<(2*i)-1)
                    {
                    printf("%d*",nu);}
                     else
                         printf ("%d ",nu);
                       nu++;}
                     sp--;
                       printf ("\n");
                       }
                        sp=0;
             for (i=n;i>=1;i--)
             {
                 x=i-1;
                 y=x*x+1;
               for (j=1;j<=sp;j++)
                    printf ("  ");
                for (j=1;j<=2*i-1;j++)
                    {
                        if (j<(2*i)-1)
                        printf("%d*",y);
                        else
                            printf ("%d ",y);
                    y++;}
                    sp++;
                    printf ("\n");
             }
             }

/*
enter no of rows3
    1
  2*3*4
5*6*7*8*9
5*6*7*8*9
  2*3*4
    1
    */
