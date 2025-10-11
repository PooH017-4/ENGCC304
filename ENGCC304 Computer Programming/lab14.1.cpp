#include <stdio.h>
#include <limits.h>

// ฟังก์ชันหาค่า Min
int findMin(int *arr, int size) {
    int *ptr = arr;
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
        if (*(ptr + i) < min) min = *(ptr + i);
    return min;
}

// ฟังก์ชันหาค่า Max
int findMax(int *arr, int size) {
    int *ptr = arr;
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
        if (*(ptr + i) > max) max = *(ptr + i);
    return max;
}

int main() {
    int arr[100]; // สมมติรับไม่เกิน 100 ค่า
    int *ptr = arr;
    int n = 0;
    int temp;

    printf("Enter value:\n");

    // รับค่าจนกว่าจะกด Enter (scanf คืนค่า 0)
    while (scanf("%d", &temp) == 1) {
        *(ptr + n) = temp;
        n++;
        if (getchar() == '\n') break; // ตรวจสอบ Enter
    }

    // แสดง Index
    printf("Index:");
    for (int *p = ptr; p < ptr + n; p++)
        printf(" %ld", p - ptr);

    printf("\nArray:");
    for (int *p = ptr; p < ptr + n; p++)
        printf(" %d", *p);

    printf("\n\nMin : %d\nMax : %d\n", findMin(ptr, n), findMax(ptr, n));

    return 0;
}
