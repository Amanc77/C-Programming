// all prime number bitween two given number

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
  printf("\n enter starting number  ");
  int s; 
  scanf("%d",&s);
 
 printf("enter ending number ");
 int e;
 scanf("%d",&e);

 for(int j = s; j<=e ; j++)
  {
     
   if(isPrime(j))
   {
    printf("%d \n",j);
   
   }
  
  }
  
  printf("\n");
  return 0;
  }