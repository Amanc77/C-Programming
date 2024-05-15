#include <stdio.h>

long long fact(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

long long ncr(int n, int r) {
    long long num = fact(n);
    
    long long n_r = fact(n - r);

    long long z = num / (n_r);

    return z;
}

int main() {
    printf("Enter value of n and r: ");
    int n, r;
    scanf("%d %d", &n, &r);

    long long numberOfArrngement = ncr(n, r);

    printf("Total Arrngemert by %d and %d is %lld\n", n, r, numberOfArrngement);

    return 0;
}
