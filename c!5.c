#include"stdio.h"
int prime(int );
int main()
{
 int i,j,nu=2;
  for (i=1;i<=5;i++)
    {
    printf ("\n");
      for (j=1;j<=i;j++)
      {
  while (!prime(nu))
    {
     nu++;
    }
    printf ("%d\t",nu++);
    }printf("\n");}
    return 0;
    }
    int prime (int x)
     {
      int i,co;
      for(i=2;i<x;i++)
        {
         if (x%i!=0)
          co=1;
          else {
           co=0;
           break;}}
           if (co==1||x==2)
            return (1);
            else return (0);
            }
