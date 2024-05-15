// all armstrong number bteween tow nunber 

#include<stdio.h>
#include<math.h>

int isArmstrong(int n)
{
    int nd =0 , temp = n;
    while(temp)
    {
         temp = temp / 10 ;
        nd++;

    }

   int num = n;
   temp = n;
   int sum = 0;

    while (temp)
     {
        int ld = temp % 10;
        int z = pow(ld, nd);
        sum = sum + z;
        temp /= 10;
    }

    if(sum == num)
        return 1;

    else 
        return 0;

    
}

int main()
  {
  printf("enter stanting number ");
  int s,e;
  scanf("%d",&s);

  printf("now enter ending number ");
  scanf("%d",&e);
  int i;
  for( i = s; i<=e; i++)
  {
    if(isArmstrong(i))
    {
        printf("%d ",i);
    }
  }
  
  printf("\n");
  return 0;
  }