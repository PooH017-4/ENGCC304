#include <stdio.h>
#include <string.h>
#include <ctype.h>   // ใช้สำหรับจัดการอักขระ เช่น แปลงตัวพิมพ์, ตรวจตัวอักษร

int main() {
    char text[100];
    char clean[100];
    int len = 0;

    printf("Enter Words that can be read reversed: ");
    fgets(text, sizeof(text), stdin); // รับข้อความจากผู้ใช้ (รวมช่องว่างได้)

    // ตรวจข้อความที่รับมาทีละตัวรวมถึงตัวเลข จนถึงจุดสื้นสุด แล้วแปลงให้เป็นพิมพ์เล็ก
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalnum(text[i])) {          //ถ้าเป็นตัวอักษรหรือตัวเลข
            clean[len++] = tolower(text[i]); // แปลงเป็นตัวพิมพ์เล็ก
        }
    }
    clean[len] = '\0'; // ปิดท้าย string

    // ตรวจสอบ palindrome
    int pass = 1;
    for (int i = 0; i < len / 2; i++) {
        if (clean[i] != clean[len - i - 1]) {
            pass = 0;
            break;
        }
    }

    if (pass)
        printf("Pass\n");
    else
        printf("Not Pass\n");

    return 0;
}
