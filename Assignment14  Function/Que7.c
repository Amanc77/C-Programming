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
    long long r1 = fact(r);
    long long n_r = fact(n - r);

    long long z = num / (r1 * n_r);

    return z;
}

int main() {
    printf("Enter value of n and r: ");
    int n, r;
    scanf("%d %d", &n, &r);

    long long totalCombination = ncr(n, r);

    printf("Total combination by %d and %d is %lld\n", n, r, totalCombination);

    return 0;
}
