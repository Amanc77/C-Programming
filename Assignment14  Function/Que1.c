#include<stdio.h>

float area(float); // funntion declretion 

float area(float r)
{
   float a = 3.14*r*r;
   return a;
}
int main()
  {
  printf("enter radious of circule ");
  int r; 
  scanf("%d",&r);
  float a = area(r);
  printf("area of circule haveing radious %d is %.2f",r,a);
  
  
  printf("\n");
  return 0;
  }