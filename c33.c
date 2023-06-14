#include"stdio.h"
int main()
{int arr[ ]={1,2,3,18,7,8,10};
int x,y,z;
x= ++arr[2];
y=arr[2]++;
z= arr[x++];
printf ("%d %d %d",x,y,z);//5 4 7
}

/*int x,y,z;
x= ++arr[2];
y= ++arr[2];
z= arr[x++];
printf ("%d %d %d",x,y,z);//5 5 5
}*/

/*int x,y,z;
x= ++arr[2];
y= ++arr[2];
z= arr[++x];
printf ("%d %d %d",x,y,z);//5 5 8
}*/
/*int x,y,z;
x= ++arr[2];
y= ++arr[2];
z= arr[++x];
printf ("%d %d %d",x,y,z);//5 5 8
}*/
/*int x,y,z;
x= ++arr[2];
y= ++arr[2];
z= arr[x];
printf ("%d %d %d",x,y,z);//4 4 7
}
*/
