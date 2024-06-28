// sum of n number

#include<stdio.h>
int sum = 0;

int foctorialOfN(int n)
{
   
    if(n == 1)
      return 1;


    else
    {
        return n * foctorialOfN(n-1);

       
    }
    
}
int main()
  {
  printf("enter a natural number ");
  int n; 
  scanf("%d",&n);

  int s = foctorialOfN(n);

  printf("factorial  of %d  is %d ",n,s);
  
  
  printf("\n");
  return 0;
  }