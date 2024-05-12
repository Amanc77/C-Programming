#include<stdio.h>
#include<stdlib.h>
void ope();

void ope(int n, int m)
{

    while(1)
     { 


           
            int c;
        
            printf("\n1. Addition");
            printf("\n2. Subtraction");
            printf("\n3. multiplication");
            printf("\n4. division");
            printf("\n5. Exit. \n \n");


            printf("Now enter choice ");
            scanf("%d",&c);

            switch (c)
            {
            case 1:
                printf("Addition of %d and %d is %d \n",n,m,n+m);
                break;
            case 2:
                printf("Subtrction of %d and %d is %d \n",n,m,n-m);
                break;
            case 3:
                printf("Multiplication of %d and %d is %d \n",n,m,n*m);
                break;
            case 4:
            printf("Division of %d and %d is %d \n",n,m,n/m);
                break;
            case 5:
                exit(1);
            
            default:
                printf("Invalid input \n");
                break;
            }


     }


}
int main()
  {
     int n,m;

            printf("\nEnter two number ");

            

            scanf("%d %d",&n,&m);
 
  ope(n,m);
  
  
  printf("\n");
  return 0;
  }