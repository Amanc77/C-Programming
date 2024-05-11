#include<stdio.h>
int main()
  {
  printf("enter a number");

  int n;
  scanf("%d",&n);

  switch (n)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
     printf("31 Days ");
     break;
  case 6:
  case 4:
  case 9:
  case 11:
      printf("30 Days");
      break;
  case 2:
        printf("")
  default:
    break;
  }


  
  
  printf("\n");
  return 0;
  }