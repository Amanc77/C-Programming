#include<stdio.h>

int factorial(int); // funntion declretion 

int factorial(int n)
{
    if(n<=0)
         return 1;
    else 
       return n * factorial(n-1);
}
int main()
  {
  printf("\n\n enter a number  ");
  int p; 
  scanf("%d",&p);
 int z = factorial(p);

 printf("factorial of %d  is %d",p,z);
 
  
  
  printf("\n");
  return 0;
  }

  // 1= even 
  // 0 = odd