#include <stdio.h>

int main() {
    int i, n, sum = 1, a, b;
    printf("Enter which term of Fibonacci is to be printed: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The series is: 1\n");
        printf("The 1st term of Fibonacci series is: 1\n");
        return 0;
    } else if (n == 2) {
        printf("The series is: 1 1\n");
        printf("The 2nd term of Fibonacci series is: 1\n");
        return 0;
    }

    a = 1;
    b = 1;
    printf("The series is: %d %d", a, b);

    for (i = 3; i <= n; i++) {
        sum = a + b;
        a = b;
        b = sum;
        printf(" %d", sum);
    }

    printf("\n\nThe %dth term of Fibonacci series is: %d\n", n, sum);
    return 0;
}