#include"stdio.h"
int main()
{
 int i,j,n,m,sp,a,b;
  printf ("enter number of rows ");
    scanf("%d",&n);
    for (i=1;i<=1;i++)
      // {
        // for (i=2*n-1;i<2*n;i++)
           {
              for (m=1;m<2*n;m++)
                 {printf ("%d",m);}}

  printf ("\n");
    //for (i=1;i<n;i++)
     a=n;
       b=a+1;
        sp=1;
             for (i=1;i<n;i++)
             {
        for(j=1;j<=a-1;j++)
            printf ("%d",j);
            for (j=1;j<=sp;j++)
             printf (" ");
               for (j=b;j<2*n;j++)
                 printf ("%d",j);
                   a--;
                   b++;
                   sp=sp+2;
               printf ("\n");}}

/*
123456789
1234 6789
123   789
12     89
1       9*/
