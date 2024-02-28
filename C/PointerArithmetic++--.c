#include<stdio.h>
#include<conio.h>

void main()
{
  int a[]={1,4,3,2,5,7};
  int *p;
  p=&a[3];
 // printf("value is: %d%d%d",*--p,*--p,*--p);
  printf("\naddress of p: %d",&*p);
  printf("\naddress of a[1]: %d",&a[1]);
  printf("\naddress of a[3]: %d",&a[3]);
}
