#include<stdio.h>

void main(){
  int i,j,rows;
  printf("Enter no of rows you want: ");
  scanf("%d",&rows);

  for(i=1;i<=rows;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%c",i+64);

    }
    printf("\n");
  }
}