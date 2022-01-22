#include <stdio.h>

int isPrime(long long int n)
{
    if (n < 2)
        return 0;

    if (n != 2 && n % 2 == 0)
        return 0;

    for (long long int i = 3; i < n / 2; i += 2)
        if (n % i == 0)
            return 0;

    return 1;
}

int main()
{
    printf("Enter a positive integer: ");
    long long int n;
    scanf("%lld", &n);

    printf("%lld %s", n, isPrime(n) ? "is a prime number." : "is not a prime number.");

    return 0;
}
