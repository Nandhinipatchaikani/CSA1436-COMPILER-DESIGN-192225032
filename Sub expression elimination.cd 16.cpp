#include <stdio.h>

int main() {
    int a = 5;
    int b = 7;
    int c, d, e, f;

    // Common subexpression (a + b)
    c = a + b;

    // Using the result of the common subexpression
    d = c * 2;
    e = c - 3;
    f = c + 10;

    // Output the results
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    printf("f = %d\n", f);

    return 0;
}

