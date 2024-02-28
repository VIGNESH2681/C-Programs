#include<stdio.h>
#include<conio.h>
void main()
{
  int age;
  printf("Enter your age:");
  scanf("%d",&age);

  /*if(age>=18){
    printf("your age is: %d\n",age);
    printf("Your are eligible to vote");
  }
  
  printf("\n It's time to go home");
  getch();*/

  if(age>20 && age<30){
    printf("\nyour age is:%d",age);
  printf("\nyou can go coffee with me");

  }
  

  if(age>15){
     printf("\nYour age is %d",age);
  printf("\nIt's time to go home");

  }
 
  getch();
}
 
