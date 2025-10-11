#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N;
    printf("Enter Number of Array capacity :\n");
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    printf("Index:");
    for (int i = 0; i < N; i++) printf("%3d", i);

    printf("\nArray:");
    for (int i = 0; i < N; i++) {
        int n = arr[i];
        int prime = 1;

        if (n < 2) prime = 0;
        else {
            for (int j = 2; j <= sqrt(n); j++) {
                if (n % j == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime)
            printf("%3d", n);
        else
            printf("%3c", '#');
    }

    printf("\n");
    return 0;
}
