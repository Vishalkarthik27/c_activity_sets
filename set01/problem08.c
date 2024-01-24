#include <stdio.h>

// Function to take input for the size of the array
int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

// Function to take input for the array elements
void input_array(int n, int a[n]) {
    printf("Enter %d different numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
}

// Function to find the sum of array elements
int sum_n_array(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    return sum;
}

// Function to display the result
void output(int n, int a[n], int sum) {
    printf("Sum of %d different numbers: %d\n", n, sum);
}

// Main function
int main() {
    int n, sum;

    // Input array size
    n = input_array_size();

    // Declare an array of size n
    int a[n];

    // Input array elements
    input_array(n, a);

    // Calculation
    sum = sum_n_array(n, a);

    // Output
    output(n, a, sum);

    return 0;
}
