#include<stdio.h>
#include<string.h>

int main(){
  int i,len1,len2;
  //with string concatenation
 /*
 char s1[30]="Vignesh";
  char s2[7]="vijay";
  strcat(s1,s2);
  printf("String after concatenation is:  %s\n",s1);
  puts(s2);
 */ 
//(or)
//without string concatenation
char s1[30]="Vignesh";
  char s2[]="vijay";

  len1=strlen(s1);
  len2=strlen(s2);
  for(i=0;i<=len2;i++)
  {
    s1[len1+i]=s2[i];
  }
  printf("String after concatenation is:  %s\n",s1);
  puts(s2);

}