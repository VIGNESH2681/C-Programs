#include<stdio.h>

void main(){
  int i,j,rows;
  printf("Enter no of rows you want: ");
  scanf("%d",&rows);

  for(i=rows;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("%c",j+64);

    }
    printf("\n");
  }
}