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
    printf("collage start from today ");
    break;
   case 2:
    printf("jay bajarang balii");
    break;
   case 3:
    printf("it wed day");
    break;
   case 4:
    printf(" its thrust day");
    break;
   case 5:
    printf("just chill bro  ");
    break;
   case 6:
    printf("holiday start from here ");
    break;
   case 7:
    printf("this is our faverater day");
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