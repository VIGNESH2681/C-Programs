#include<stdio.h>
void main()
{
  int arr1[5],arr2[5],sumArr[5],i;
  
  printf("Enter first array elements: ");
  
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("Enter second array elements: ");

  for(i=0;i<5;i++)
  {
    scanf("%d",&arr2[i]);
  }

  for(i=0;i<5;i++)
  {
    sumArr[i]=arr1[i]+arr2[i];
    printf("Sumarr element at index %d is=%d\n",i,sumArr[i]);
  }

  
}