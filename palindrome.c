#include <stdio.h>
#include <limits.h>

int main(void) {
    long long n, x, rev = 0;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) return 0;

    if (n < 0) {                 // negative numbers are not palindromes
        printf("Not a palindrome.\n");
        return 0;
    }

    x = n;
    while (x > 0) {
        int d = x % 10;
        // Optional overflow guard (for very large inputs)
        if (rev > (LLONG_MAX - d) / 10) {
            printf("Number too large to check safely.\n");
            return 0;
        }
        rev = rev * 10 + d;
        x /= 10;
    }

    if (rev == n) printf("Palindrome.\n");
    else          printf("Not a palindrome.\n");
    return 0;
}
