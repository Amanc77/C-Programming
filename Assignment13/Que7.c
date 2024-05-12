#include<stdio.h>
#include<stdlib.h>
void ope();

void ope()
{

    while(1)
     { 
5

           
            int c;
        
            printf("\n\n\n1. Factorial of number");
            printf("\n2. Chack odd or even ");
            printf("\n3. Area of circule");
            printf("\n4. sum of first n natural number ");
            printf("\n5. Exit. \n \n");


            printf("Now enter choice ");
            scanf("%d",&c);

            switch (c)
            {
            case 1:
                printf("Enter a number ");
                int  n,fact = 1;
                scanf("%d",&n);
                for(int i = 1; i<=n ; i++)
                {
                    fact *=i;
                }
                printf("factorial of %d is %d",n,fact);

                break;
            case 2:
                printf("Enter a number ");
                int num;
                scanf("%d",&num);
               if(num % 2 == 0)
                    printf("even");
                else
                    printf("odd");
                break;
            case 3:
                printf("Enter radious of circule ");
                int r;
                scanf("%d",&r);

                float area = 3.14*r*r;
                printf("area is %f ",area);
                break;
            case 4:
            printf("Enater a natural number ");
             int sum = 0;
            scanf("%d",&n);
            for(int i = 1; i<=n ; i++)
            {
                sum += i;
            }
            printf("sum of first %d natural number is %d",n,sum);
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
  ope();
  
  
  printf("\n");
  return 0;
  }