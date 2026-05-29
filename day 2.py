q1.c
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;   // get last digit
        sum = sum + digit;  // add to sum
        num = num / 10;     // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

q2.c
#include <stdio.h>

int main() {
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}

q3.c
#include <stdio.h>

int main() {
    int num, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;
        product = product * digit;
        num = num / 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}

q4.c
#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}