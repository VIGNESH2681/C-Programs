#include<stdio.h>
int main()
{
  //char name[30]="jenny khatri";
  //printf("%s",name);

  //char name[30]={'j','e','n','n','y','\0'};
  //printf("%s",name);

  /*char name[30];
  printf("enter name:");
  scanf("%s",name);
  printf("%s",name);*/

   /*char fname[30],lname[30];
  printf("enter name:");
  scanf("%s%s",fname,lname);
  printf("%s %s",fname,lname);*/

  char name[30];
  printf("Enter name: ");
  gets(name);
  //printf("%s",name);
  puts(name);
  puts(name);
  printf("%.5s\n",name);
  printf("%10.5s\n",name);
  printf("%s\n",&name[2]);


}