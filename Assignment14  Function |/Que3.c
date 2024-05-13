#include<stdio.h>

int oddOReven(int); // funntion declretion 

int oddOReven(int p)
{
    int z = (p%2==0)?1:0;
    return z;
}
int main()
  {
  printf("\n\n enter a number for chack odd or even ");
  int p; 
  scanf("%d",&p);
  int s = oddOReven(p);
  printf("number is %d",s);
  
  
  printf("\n");
  return 0;
  }

  // 1= even 
  // 0 = odd