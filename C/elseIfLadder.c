#include<stdio.h>
#include<conio.h>
void main()
{
  int marks;
  printf("Enter Marks:\n");
  scanf("%d",&marks);

  if(marks>80){
    printf("Grade is A");
  }
  else if(marks>70){
    printf("Grade is B");
  }
  else if(marks>60){
    printf("Grade is c");
  }
  else {
    printf("Grade is D");
  }
  printf("\nEnd of Program");
  getch();
}