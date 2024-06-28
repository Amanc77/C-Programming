#include<stdio.h>

float simpleInterest(int , float,float); // funntion declretion 

float simpleInterest(int p , float r, float t)
{
   float si = (p*r*t)/100;
   return si;
}
int main()
  {
  printf("For calculating Simple interst enter P , R and T ");
  int p,r,t; 
  scanf("%d %d %d",&p,&r,&t);
  float s = simpleInterest(p,r,t);
  printf("simpleInterest is %.2f",s);
  
  
  printf("\n");
  return 0;
  }