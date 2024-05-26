#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b ,i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code. 
    int n = b-a+2;
    int arr[n];
    for( i = a ; i<=b ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for( i = a ; i<=b ; i++)
    {
        if(arr[i]<=9 && arr[i]>=1)
        {
            
            if(arr[i] == 1)
           printf("one\n");
        
         if(arr[i] == 2)
           printf("two\n");
           
         if(arr[i] == 3)
           printf("three\n");
           
         if(arr[i] == 4)
           printf("four\n");
           
         if(arr[i] == 5)
           printf("five\n");
           
         if(arr[i] == 6)
           printf("six\n");
           
         if(arr[i] == 7)
           printf("seven\n");
           
         if(arr[i] == 8)
           printf("eight\n");
           
         if(arr[i] == 9)
           printf("nine\n");
           
           
            
        }
        else if(arr[i]%2 == 0)
              printf("even\n"); 
              
        else {
            printf("odd");
            }
        
        
        
    }
    return 0;
}

