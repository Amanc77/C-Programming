#include<stdio.h>
#include<stdlib.h>
int main()
  {
  while(1)
  {
    printf("\nEnter a subject marks ");
  int n; 
scanf("%d",&n);
  switch (n)
  {
 
   case 90 ... 100 :
    printf("Grade A ");
    break;
   
   case 80 ... 89 :
    printf("Grade B ");
    break;
   
   case 70 ... 79 :
    printf("Grade C ");
    break;
   
   case 60 ... 69:
    printf("Grade  D ");
    break;
   
   case 50 ... 59:
    printf("Grade E ");
    break;
   
   case 0 ... 49 :
    printf( "Fail");
    break;
   

    case 111:
      exit(1);
  
  default:
     printf("invalid input");
     break;
  }
printf("\n\nAnytime enter 111 for exit \n");

  }

  
  
  printf("\n");
  return 0;
  }