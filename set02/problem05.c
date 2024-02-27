#include <stdio.h>
int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void output(int a, int b, int gcd) {
    printf("The GCD of %d and %d is: %d\n", a, b, gcd);
}

int main() {
    int num1 = input();
    int num2 = input();
    int gcd = find_gcd(num1, num2);
    output(num1, num2, gcd);
    return 0;
}
