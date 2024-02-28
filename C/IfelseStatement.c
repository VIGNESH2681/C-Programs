#include<stdio.h>

void main()
{
  int age = 18;
  printf("Enter your age:");
  scanf("%d",&age);

  if(age>=18){
    printf("Your are eligible to vote");

  }
  else{
    printf("Your are not eligible to vote");
  }
 
}
