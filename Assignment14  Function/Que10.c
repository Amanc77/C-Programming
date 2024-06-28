#include <stdio.h>

void prime_factors(int n) {
    int divisor = 2;
    
    while (n > 1) {
        while (n % divisor == 0) {
            printf("%d ",  divisor);
            n /= divisor;
        }
        divisor++;
    }
}




int main() {
    int number = 84;
    printf("Prime factors of %d are: ",  number);
    prime_factors(number);
    return 0;
}
