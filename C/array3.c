#include<stdio.h>
void main()
{
  int a[10],i;
  int even=0, odd=0;
  printf("Enter 10 integers: ");
  
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++){
    if(a[i]%2==0){
      even=even+1;
    }
    else{
        odd=odd+1;
    }   

  }
  printf("total even no are:%d",even);
  printf("\n total odd number are:%d",odd);
  
}