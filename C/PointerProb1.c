#include<stdio.h>

void main()
{
  int a[]={10,11,-1,56,67,5,4};
  int *p,*q;
  p=a;
  q=&a[0]+3;
  printf("%d\n%d\n%d",(*p)++,(*p)++,*(++p));
  printf("\n%d",*p);
  printf("\n%d",(*p)++);
  printf("\n%d",*p);
  printf("\n%d",(*p)++);
  printf("\n%d",*p);
  q--;
  printf("\n%d",(*(q+2))--);
  printf("\n%d",*q);
  printf("\n%d",*(p+2)-2);
  printf("\n%d",*p);
  printf("\n%d",*(p++-2)-1);
  printf("\n%d",*p);

}