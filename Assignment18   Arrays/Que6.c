
#include<stdio.h>
int main()
  {
  printf("inter size of array ");
  int n;
  scanf("%d",&n);

  int i, j,arr[n];

  for ( i = 0; i < n; i++)
  {
    printf("enter the value for index %d: ",i);
    scanf("%d",&arr[i]);
  }
  

  for ( i = 0; i < n; i++)
  {
    for(j=i+1 ; j<n ; j++)
    {
        if (arr[i] > arr[j])
        {
           int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            
        }

    }
     
  }

  printf("Sorted  Array is ");

  for ( i = 0; i < n; i++)
  {
    
    printf("%d, ",arr[i]);
  }
  
  


  
  
  printf("\n");
  return 0;
  }