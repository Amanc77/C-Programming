#include<stdio.h>
int ncr(int,int);
int fact(int);

int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }

    else{ 
    return n * fact(n-1);
    }
}
int ncr(int n,int r)
{
   int  num = fact(n);
    int r1 = fact(r);
    int n_r = fact(n-r);

    int z = num / (n_r * r1);

    return z;
}
int main()
  {
  printf("enter value of n and r ");
  int n, r;
  scanf("%d %d",&n,&r);

  int totalCombination  = ncr(n,r);
  
  printf("total combination by %d and %d is %d",n,r,totalCombination);
  
  printf("\n");
  return 0;
  }