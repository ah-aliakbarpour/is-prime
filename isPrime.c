#include <stdio.h>
#include <stdlib.h>

int isPrime(long long int n)
{
    if (n < 2)
        return 0;
    
    if (n != 2 && n % 2 == 0)
        return 0;
    
    for (long long int i = 3; i <= n / 2; i += 2)
        if (n % i == 0)
            return 0;    

    return 1;
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
}