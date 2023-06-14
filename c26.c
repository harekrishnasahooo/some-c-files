#include"stdio.h"
int main()
{
    int i,j,n,r,sp;
  printf("enter no of rows");
    scanf("%d",&n);
      r=n/2;
       sp=r-1;
        for (i=1;i<=r;i++)
           {
             for (j=1;j<=sp;j++)
               printf ("  ");
                 for (j=1;j<=i;j++)
                 {
                    if (j>1)
                      printf ("*");
                   printf ("%d",j);}
                     for (j=i-1;j>=1;j--)
                       printf ("*%d",j);
                         sp--;
                          printf ("\n");}
                            sp=1;
                            for (i=r-1;i>=1;i--)
                            {
                            for (j=1;j<=sp;j++)
                                printf("  ");
                               for (j=1;j<=i;j++)
                               {
                                  if(j>1)
                                  printf ("*");
                                printf ("%d",j);}
                                 for(j=i-1;j>=1;j--)
                                    printf ("*%d",j);
                                   sp++;

                                   printf ("\n");

                            }}
/*
enter no of rows10
        1
      1*2*1
    1*2*3*2*1
  1*2*3*4*3*2*1
1*2*3*4*5*4*3*2*1
  1*2*3*4*3*2*1
    1*2*3*2*1
      1*2*1
        1
        */
