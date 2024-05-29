#include<stdio.h>



int main()
  {
  printf("enter the size of Array ");
  int i[3],j[3],k[3];

  int index;

  

  printf("enter 9 number in Matrix1: \n ");

  for( index = 0 ; index < 9 ; index++)
  {
    scanf("%d",&i[index]);
  } 

  printf("enter 9 number in Matrix2: \n ");

  for( index = 0 ; index< 9 ; index++)
  {
    scanf("%d",&j[index]);
  } 

  
  for( index = 0 ; index < 9 ; index++)
   {
    k[index] = i[index] + j[index];
  } 

   printf("Sum of matrix1 and matrix2 is : \n ");

  for( index = 0 ; index < 9 ; index++)
  {
    printf("%d",k[index]);
    
  } 

  
  
  printf("\n");
  return 0;
  }