#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}
q2.c
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication Table of %d:\n", n);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}

q3.c
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld", n, factorial);

    return 0;
}

q4.c
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        n = n / 10;
        count++;
    }

    printf("Number of digits = %d", count);

    return 0;
}