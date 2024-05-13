#include<stdio.h>

int tochackDigitPresentORnot(int,int); // funntion declretion 

int tochackDigitPresentORnot(int n , int d)
{
    while(n)
    {
        int lastdigit = n%10;
        if(lastdigit == d)
        {
            break;
        }
        n /= 10;
    }

    if(n==0)
       return 0;
    else 
       return 1;
}
int main()
  {
  printf("\n\n enter a number  ");
  int n; 
  scanf("%d",&n);
 
  printf("now enter that digit to chack it is present in that number or not ");
  int chack;
  scanf("%d",&chack);

  int z = tochackDigitPresentORnot(n,chack);
  if(z)
    printf("%d is present in number %d",chack,n);

  else
        printf("%d is NOT present in number %d",chack,n);

  
  
  printf("\n");
  return 0;
  }

  // 1= even 
  // 0 = odd