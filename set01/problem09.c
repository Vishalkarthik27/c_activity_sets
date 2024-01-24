#include <stdio.h>

float input() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    return n;
}
float square_root(float n) {
    float x = n / 2;

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
