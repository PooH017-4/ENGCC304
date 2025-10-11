#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบว่าเป็น Armstrong หรือไม่
int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;

    // นับจำนวนหลัก
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // คำนวณผลรวมของแต่ละหลักยกกำลัง digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num;
    printf("Enter Number:\n");
    if (scanf("%d", &num) != 1) {
        printf("Please enter a valid number.\n");
        return 0;
    }

    if (isArmstrong(num))
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
