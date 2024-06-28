// sum of n number

#include<stdio.h>
int sum = 0;

int sumofnterm(int n)
{
    if(n <= 0)
      return 0;
    sum = sum + n;
    sumofnterm(n-1);
    return sum;
}
int main()
  {
  printf("enter a natural number ");
  int n; 
  scanf("%d",&n);

  int s = sumofnterm(n);

  printf("sum of first %d natural number is %d ",n,s);
  
  
  printf("\n");
  return 0;
  }