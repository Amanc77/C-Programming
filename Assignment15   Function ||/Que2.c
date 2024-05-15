#include <stdio.h>

int hcf(int a, int b) {
    int min = (a < b) ? a : b;
    int i, hcf = 1; // Initialize hcf to 1

    for (i = min; i >= 1; i--) { // Loop from min down to 1
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break;
        }
    }

    return hcf;
}

int main() {
    printf("Enter two numbers a and b: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int hcff = hcf(a, b);

    printf("HCF of %d and %d is %d\n", a, b, hcff);

    return 0;
}
