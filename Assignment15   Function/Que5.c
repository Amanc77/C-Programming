#include<stdio.h>



int isPrime(int n)
{
    int i;
    for(i = 2; i<n ; i++)
    {
        if(n%i == 0)
            return 0;
    }
    
      return 1;
    
}

int main()
  {
  printf("\n How much Prime number you want to print ");
  int a; 
  scanf("%d",&a);

  int count = 0;
  int n = 2;
  while ( count != a)
  {
    
   if(isPrime(n))
   {
    printf("%d \n",n);
    count++;
   }
   n++;
  }
  
  printf("\n");
  return 0;
  }