## โจทย์
ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ 
<br />F อยู่ในช่วงคะแนนน้อยกว่า 50 , 
<br />D อยู่ในช่วงระหว่าง 50 ถึง 55 , 
<br />D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , 
<br />C อยู่ในช่วงระหว่าง 60 ถึง 65 , 
<br />C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , 
<br />B อยู่ในช่วงระหว่าง 70 ถึง 75 , 
<br />B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , 
<br />A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป 
<br /><br />(กำหนดให้ข้อนี้ใช้คำสั่ง if else ได้เท่านั้น)

## CODE lab05-017-4
```c
#include<stdio.h>

int main() 
{
    char input[100];             // ตัวเเปรชื่อ input ชนิด char ค่าเป็น string จุได้ 100 เริ่ม 0 เช่น [0,1,2,3....,100] ตำแหน่ง 0 คือเริ่มต้น
    int i = 0, isNumber = 1;     // ตัวแปรชื่อ i กำหนดมาเพื่อใช้เเทนแหน่งจุดเริ่มของอักษร (index) ในตัวแปร input เช่น i=0 คือ [i,1,2,3] 
    int score = 0;               // ตัวแปรชื่อ isNumber กำหนดมาเพื่อใช้เช็คว่าอักษรในตัวแปร input เป็นตัวเลขทั้งหมดมั้ย ถ้าใช่ ค่าเป็น 1 ถ้าไม่ เปลี่ยนค่าเป็น 0
                                 // ตัวแปรชื่อ score ชนิด int ค่าเป็น จำนวนเต็ม int มีค่าเท่ากับ 0
    printf("your score : "); 
    scanf("%s", input);          // scanf คือ รับค่าจากคีย์บอร์ด "%s" คือ แปลงค่าเป็น string ต่อด้วย " , input" คือ เอาค่าที่แปลงแล้วไปเก็บในตัวแปรชื่อ input

    while (input[i] != '\0') {                  // ลูปไปจนกว่าจะถึงตัวจบของ string 
        if (input[i] < '0' || input[i] > '9') { // เช็คตัวเลขใน ASCII (รหัสคอมพิวเตอร์) มีค่าระหว่าง '0' ถึง '9' เท่านั้น
            isNumber = 0;                       // เมื่อเงื่อนไงเป็นจริง คือ ลูปเจอตัวที่ไม่ใช่ตัวเลข ค่า isNumber จะเท่ากับ 0 จากเดิมคือ 1
            break;                              // จบการลูป เมื่อเจอตัวที่ไม่ใช่ตัวเลข
        }
        i++;                     // ค่า i เพิ่ม 1 คือเช็คตัวถัดไป เช่น i=0 [i,1,2,3] i++ = [0,i,2,3]
    }

if (isNumber) {                  // เช็คว่า ถ้า isNumber ยังเป็น 1 แปลว่า user กรอกเลขล้วนๆ จะทำในส่วนของ if นี้

    sscanf(input, "%d", &score); // sscanf คือ รับค่าที่เป็นเท่านั้น string ที่รับมา เช่น "123abcd" ที่อยู่ในตัวเเปรชนิด char
                                 // "%d" คือแปลงข้อมูลให้เป็นตัวเลขจำนวนเต็ม int
                                 // &score คือที่อยู่ของตัวแปร score ที่เราจะเอาค่าที่แปลงได้ไปเก็บ
                                 // สรุป เอาตัวเลขที่ค่าเป็น string ในตัวแปร input มาแปลงค่าเป็นตัวเลขจำนวนเต็ม int แล้วไปเก็บในตัวแปร score 
    
    printf("Grade : ");
    if (score >= 80) {
        printf("A\n");
    } else if (score >= 75) {
        printf("B+\n");
    } else if (score >= 70) {
        printf("B\n");
    } else if (score >= 65) {
        printf("C+\n");
    } else if (score >= 60) {
        printf("C\n");
    } else if (score >= 55) {
        printf("D+\n");
    } else if (score >= 50) {
        printf("D\n");
    } else if (score >= 0) {
        printf("F\n");
    } else { 
        printf("Invalid score\n");
    }
} else {                                    // ถ้าค่า isNumber ไม่เป็น 1 
    printf("Please enter number only.\n");  // แสดงผลตามนี้
}
    return 0;                               //จบการทำงานของโปรแกรม
}
```

## TEST CASE
### Input
```bash
enter score :
80
```
### Output
```bash
A !
```

## TEST CASE
### Input
```bash
enter score :
55
```
### Output
```bash
D+ !
```

## TEST CASE
### Input
```bash
enter score :
64
```
### Output
```bash
C+ !
```

## TEST CASE
### Input
```bash
enter score :
44
```
### Output
```bash
F !
```

## TEST CASE
### Input
```bash
enter score :
hello
```
### Output
```bash
please enter number only.
```
