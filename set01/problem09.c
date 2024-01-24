#include <stdio.h>

// Function to take input for the number
float input() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    return n;
}

// Function to calculate the square root using the Babylonian method
float square_root(float n) {
    // Initial guess for the square root
    float x = n / 2;

    // Iterate until a satisfactory approximation is reached
    for (int i = 0; i < 10; ++i) {
        x = 0.5 * (x + n / x);
    }

    return x;
}

void output(float n, float sqrroot) {
    printf("Square root of %.2f is approximately %.4f\n", n, sqrroot);
}

int main() {
    float n, sqrroot;
    n = input();
    sqrroot = square_root(n);
    output(n, sqrroot);

    return 0;
}
