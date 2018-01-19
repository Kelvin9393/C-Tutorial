#include <stdio.h>

int main() {

    long n, sum = 0;

    printf("This program sum a series of integers.\n");
    printf("Enter integers (0 to terminates): ");

    scanf("%ld", &n);
    while (n != 0) {
        sum += n;
        scanf("%ld", &n);
    }

    printf("The sum is: %ld\n", sum);

    return 0;
}
