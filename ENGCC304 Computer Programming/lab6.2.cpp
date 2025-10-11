#include <stdio.h>

int main() {
    int N;
    printf("Enter value:\n");
    if (scanf("%d", &N) != 1) {
        printf("please enter number only.\n");
        return 0;
    }

    printf("Series: ");
    if (N % 2 != 0) { // กรณีเลขคี่
        for (int i = 1; i <= N; i += 2)
            printf("%d ", i);
    } else { // กรณีเลขคู่
        for (int i = N; i >= 0; i -= 2)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
