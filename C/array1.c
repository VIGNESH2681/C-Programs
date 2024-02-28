#include<stdio.h>
void main()
{
  int a[3+2],i;
  printf("Enter the array elements:");
  for(i=0;i<5;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++){
    printf("\n array element at index %d is: %d",i,a[i]);
  }

  for(i=4;i>=0;i--){
    printf("\n array element at index %d is:%d",i,a[i]);
  }
}