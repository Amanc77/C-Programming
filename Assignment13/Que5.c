#include<stdio.h>
#include<stdlib.h>
int main()
  {
  while(1)
  {
    printf("\nenter a day number ");
  int n; 
scanf("%d",&n);
  switch (n)
  {
 
   case 1:
    printf("good ");
    break;
   case 2:
    printf("better");
    break;
   case 3:
    printf(" best");
    break;
  
   
    case 8:
      exit(1);
  
  default:
  printf("invalid input");
    break;
  }

  }

  
  
  printf("\n");
  return 0;
  }