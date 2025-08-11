#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;      //ตัวแปรสุ่มเลข และ เดาเลข
    int choice;             //ตัวแปรถามก่อนเล่น
    int count;              //ลูปเดาใหม่
    int yourHP;             //คะเเนนผู้เล่น
    int regame = 0;         //ลูปเล่นใหม่
    int minRange, maxRange; //บอกใบ้ระยะเลขที่เดา

    do {
        printf(": Do you want to play GAME?\n : Type (1) to play (-1) to exit.\n");

        if (scanf("%d", &choice) != 1) {                        // ถ้าอ่านไม่ใช่ตัวเลข
            printf("Sorry, please enter only (1) or (-1)\n");

            while (getchar() != '\n');                          // ล้าง buffer หรือข้อมูลเก่าที่ค้างใน scanf
            continue;                                           // กลับไปถามใหม่
        }

        if (choice == -1) {
            printf("Well, See you again\n");
            return 0;
        } else if (choice != 1) {                               // ถ้าเป็นตัวเลขแต่ไม่ใช่ 1 หรือ -1
            printf("Sorry, please enter only (1) or (-1)\n");
            continue;                                           // กลับไปถามใหม่
        } else {
            printf("Let's Play\n");
        }

        srand(time(NULL));
        number = rand() % 100 + 1;                              // สุ่มครั้งเดียวต่อเกม
        count = 0;
        yourHP = 100;                                           //คะแนนผู้เล่นมี 100

                                                                //ระยะใบ้เลขเดาต่ำสุด 1 สูงสุด 100
        minRange = 1; 
        maxRange = 100;

        while (1) {
            printf("(HP = %d)\n", yourHP);
            count++;                                            //ลูปเพิ่ม 1 รอบ
            yourHP -= 10;                                       //คะแนนลบ 10 ทุกครั้งที่เริ่มลูป

            printf("Guess the secret number (%d-%d): ", minRange, maxRange);
            if (scanf("%d", &guess) != 1) {                     // ตรวจ input ตอนเดาเลขด้วย
                printf("PLEASE enter A number!:\n");
                while (getchar() != '\n');                      // ล้าง buffer
                continue;
            }

            if (guess == number) {                              //ถ้าเลขเดา ตรงกับ เลขสุ่ม ชนะ จบเกม
                printf("CORRECT! You guessed it in %d tries : (HP = %d)\n", count, yourHP);
                break;
            } else if (guess < number) {                        //ถ้าเลขเดา น้อยกว่าเลขสุ่ม ให้ ระยะใบ้เลขน้อย แทนที่ด้วย เลขเดา บวก 1 เช่น 
                printf("WRONG... secret number is HIGHER than %d : (HP = %d)\n", guess, yourHP);
                minRange = guess + 1;                           //number = 30, minRange = 1, guess = 22 +1 --> minRange = 22 + 1 = 23:
            } else {                                            //ถ้าเลขเดา มากกว่าเลขสุ่ม ให้ ระยะใบ้เลขมาก แทนที่ด้วย เลขเดา ลบ 1 เช่น 
                printf("WRONG... secret number is LOWER than %d : (HP = %d)\n", guess, yourHP);
                maxRange = guess - 1;                           //number = 30, maxRange = 100, guess = 50 -1 --> maxRange = 50 - 1 = 49:
            }

            if (yourHP <= 0) {                                  //ถ้าคะแนนผู้เล่นหมด จบเกม
                printf("Game Over! The secret number was %d\n", number);
                break;
            }
        }

        regame++;                                               //เริ่มเกมใหม่
    } while (regame < 10);                                      //ถ้าเริ่มใหม่ครบ 10 รอบ จบโปรแกรม

    return 0;
}
