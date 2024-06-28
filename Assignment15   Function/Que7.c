// first n term of fibonachhi serise
#include<stdio.h>
int nfibonachhi(int n )
{
    int a = -1;
    int b = 1;
    int count = 0;
    while( count != n)
    {
        
        int c = a+b;
        printf(" %d ",c);
        count++;
        a = b; 
        b = c;
    }


}


int main()
  {

  printf("enter number of term ");
  int n;
  scanf("%d",&n);

  nfibonachhi(n);

  
  
  printf("\n");
  return 0;
  }