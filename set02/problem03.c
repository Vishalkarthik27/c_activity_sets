#include <stdio.h>
int input_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
int is_composite(int n) {
    if (n < 4) {
        return 0; 
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 1; 
        }
    }

    return 0; 
}
void output(int n, int result) {
    if (result) {
        printf("%d is a composite number.\n", n);
    } else {
        printf("%d is not a composite number.\n", n);
    }
}

int main() {
    int number = input_number();
    int isComposite = is_composite(number);
    output(number, isComposite);
    return 0;
}
