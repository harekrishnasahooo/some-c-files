#include"stdio.h"
void f1(int a[])
{
    a[0]=30;

}
  int main()
  {

      int a[3]={20,30,40};
      f1(a);
      printf ("%d %d",*a,a[0]);
      return 0;
  }
