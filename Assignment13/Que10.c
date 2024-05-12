#include<stdio.h>
#include<stdlib.h>
void ope();

void ope()
{

    while(1)
     { 


           
            int c;
        
            printf("\n\n\n1. LCM of two number ");
            printf("\n2. sum of digit ");
            printf("\n3. valume of quboid");
            printf("\n4. chack wether number is prime or not");
            printf("\n5. Exit. \n \n");


            printf("Now enter choice ");
            scanf("%d",&c);

            switch (c)
            {
            case 1:
                printf("Enter a number two number  ");
                int  a,b;
                scanf("%d%d",&a,&b);
                int lcm = (a>b)?a:b;
                while(1)
                {
                    if (lcm % a == 0 && lcm % b == 0)
                    {
                        printf("lcm is %d",lcm);
                      break;
                    }
                    lcm++;
                }
                break;
            case 2:
                printf("Enter a number ");
                int num,sum = 0;
                scanf("%d",&num);
             while(num){
                int temp = num % 10;
                sum += temp;
                 num /=10;
             }
                printf("sum of digit is %d",sum);
                break;
            case 3:
                printf("Enter length , bridth and hight of quboid ");
                int l,b1,h;
                scanf("%d %d %d",&l,&b1,&h);

                float valume = l*b1*h;
                printf("valume  is %f ",valume);
                break;
            case 4:
            printf("Enater a natural number ");
            int n,i; 
            scanf("%d",&n);
            for( i = 2;i<=n ;i++)
            {
                if(n%i==0)
                  break;
            }
            if(n == i)
            {
                printf("%d is prime number ",n);
            }
            else
            {
                printf("%d is NOT prime number ",n);
            }
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