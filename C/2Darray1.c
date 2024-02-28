#include<stdio.h>
void main()
{
  int a[2][3]={{1,2,3},{4,5,6}};
  int i,j;
  
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      scanf("%d",&a[i][j]);
      
    }
  }
  printf("%d",a[0][1]);
}