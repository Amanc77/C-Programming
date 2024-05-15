#include<stdio.h>



int cheackPrime(int n)
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
  printf("\nenter a number ");
  int n; 
  scanf("%d",&n);


    int nextPrime = n+1;

    while(!cheackPrime(nextPrime))
    {
        nextPrime++;
    }

    printf("next prime number is %d",nextPrime);
    

  
  
  
  printf("\n");
  return 0;
  }