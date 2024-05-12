#include<stdio.h>
#include<stdlib.h>
int main()
  {
  
    printf("\nEnter a Charecter ");
  char n; 
scanf("%c",&n);
  switch (n)
  {
 
   case 'A' : case 'E' : case 'I' : case 'O' : case 'U' :
   case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
            printf("Vowel");
            break;

   
    case 'B' : case 'C' : case 'D' : case 'G' : case 'F' : 
     case 'b' : case 'c' : case 'd' : case 'g' : case 'f' :

      case 'H' : case 'J' : case 'K' : case 'L' : case 'M' : case 'N' :
       case 'h' : case 'j' : case 'k' : case 'l' : case 'm' : case 'n' :
 
     case 'P' : case 'Q' : case 'R' : case 'S' : case 'T' : 
      case 'p' : case 'q' : case 'r' : case 's' : case 't' : 

      case 'V' ... 'Z': 
      case 'v' ... 'z':

             printf("consonent ");
             break; 
  
  default:
     printf("Other spcial character ");
     break;
  }


  
  
  printf("\n");
  return 0;
  }