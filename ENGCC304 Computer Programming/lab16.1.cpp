#include <stdio.h>

int main() {
    int arr[] = { 15, 7, 25, 3, 73, 32, 45 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Old Series : ");
    for (int i = 0; i < n; i++) {
        if (i != 0) printf(", ");
        printf("%d", arr[i]);
    }
    printf("\n");

    // Bubble Sort (เรียงจากน้อยไปมาก)
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("New Series : ");
    for (int i = 0; i < n; i++) {
        if (i != 0) printf(", ");
        printf("%d", arr[i]);
    }
    printf("\n");

    // หาตำแหน่งเลข 32
    int pos32 = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 32) {
            pos32 = i;
            break;
        }
    }

    printf("Pos of 32 : %d\n", pos32);

    return 0;
}
