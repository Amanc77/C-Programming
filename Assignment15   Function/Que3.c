#include<stdio.h>

void cheackPrime(int);
void cheackPrime(int n)
{
    int i, num = n;
    for(i = 2; i<=n ; i++)
    {
        if(n%i == 0)
            break;
    }
    if(i == n)
     printf("\n\n%d is prime",n);

    else
           printf("%d is not prime",n);

    
}

int main()
  {
  printf("\nenter a number to chack prime ");
  int a; 
  scanf("%d",&a);

  cheackPrime(a);
  
  
  printf("\n");
  return 0;
  }