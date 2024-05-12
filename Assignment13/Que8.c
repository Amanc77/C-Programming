#include<stdio.h>
#include<stdlib.h>
int main()
  {
  
    printf("\nEnter a Charecter ");
  char n; 
scanf("%c",&n);
  switch (n)
  {
 
   case 'A' ... 'Z' :
    printf("Upper case");
    break;
   
   case 'a' ... 'z':
    printf("Lower case");
    break;
   
   case '0' ... '9':
    printf("A  number ");
    break;
   

  
  default:
     printf("spcial character ");
     break;
  }


  
  
  printf("\n");
  return 0;
  }