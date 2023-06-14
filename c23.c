#include"stdio.h"
int main()
{
  int i,j,n,nu=1,sp,x=0,y;

  printf ("enter numbrer of rows ");
   scanf("%d",&n);
     sp=3*n;
   for (i=1;i<=n;i++)
   {

   x=x+i;
                  y=x;
     for (j=1;j<=i;j++)
          {printf ("%d ",nu);
            nu++;}
            for (j=1;j<=sp;j++)
              printf (" ");

for (j=1;j<=i;j++)

              {

                  printf ("%d ",y);
                      y--;}
                       sp=sp-4;
                         printf ("\n");}}
