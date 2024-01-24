#include <stdio.h>
#include <math.h>

float input()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    return n;
}

float square_root(float n)
{

    if (n < 0)
    {
        printf("Square root of a negative number is not defined.\n");
        return -1.0;
    }

    float guess = n;
    float previous_guess;
    float epsilon = 0.0001;

    while (fabs(guess - previous_guess) > epsilon)
    {
        previous_guess = guess;
        guess = 0.5 * (guess + n / guess);
    }

    return guess;
}

void output(float n, float sqrroot)
{
    if (sqrroot >= 0)
    {
        printf("The square root of %f is approximately %f\n", n, sqrroot);
    }
}

int main()
{
    float number, result;
    number = input();
    result = square_root(number);
    output(number, result);
    return 0;
}