#include<stdio.h>

int lcm(int, int);

int lcm(int a , int b )
{
    int min = (a < b) ? a : b;
    int i, hcf = 1; // Initialize hcf to 1

    for (i = min; i >= 1; i--) { // Loop from min down to 1
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break;
        }
    }
  return (a*b)/hcf;
  
}
int main()


  {
  printf("Enter two nuber a and b ");
  int a,b;
  scanf("%d %d",&a,&b);

  int lcmm = lcm(a,b);

  printf("lcm of %d and %d is %d",a,b,lcmm);
  
  
  printf("\n");
  return 0;
  }