#include<stdio.h>

void main(){
  int i,j,space,rows;
  printf("Enter the number of rows you want to print: ");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++){
    for(space=1;space<=rows-i;space++){
      printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
      printf("*");
    }
    printf("\n");
  }

  for(i=rows-1;i>=1;i--){
    for(space=1;space<=rows-i;space++){
      printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
      printf("*");
    }
    printf("\n");
  }
  
}