#include<stdio.h>
#include<string.h>
void main()
{
  int len,i,ch;
  char s1[30];
  printf("enter string: ");
  gets(s1);
  len=strlen(s1);
  for(i=0;i<len/2;i++){
    ch=s1[i];
    s1[i]=s1[len-1-i];
    s1[len-1-i];

  }
  printf("%s",s1);
}