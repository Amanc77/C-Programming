#include<stdio.h>

void firstN_naturalNumber(int); // funntion declretion 

void firstN_naturalNumber(int p)
{
    for(int i = 1 ; i<=p; i++)
    {
        if(i%2!= 0)
        printf("%d ",i);
    }
}
int main()
  {
  printf("\n\n enter a number  ");
  int p; 
  scanf("%d",&p);
  firstN_naturalNumber(p);
 
  
  
  printf("\n");
  return 0;
  }

  // 1= even 
  // 0 = odd