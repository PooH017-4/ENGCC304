#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int play, guess, answer;
    int score;
    int low, high;
    
    srand(time(NULL)); // ใช้เวลาปัจจุบันเป็น seed เพื่อให้สุ่มจริงทุกครั้ง

    while (1) {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        if (scanf("%d", &play) != 1) {
            // ถ้าผู้ใช้กรอกไม่ใช่ตัวเลข
            printf("Please enter only 1 or -1.\n\n");
            while (getchar() != '\n'); // เคลียร์ buffer
            continue;
        }

        if (play == -1) {
            printf("\nSee you again.\n");
            break;
        } else if (play == 1) {
            score = 100;
            answer = rand() % 100 + 1;
            low = 1;
            high = 100;

            printf("(Score=%d)\n\n", score);

            while (1) {
                printf("Guess the winning number (%d-%d) :\n", low, high);

                if (scanf("%d", &guess) != 1) {
                    printf("Please enter a valid number.\n");
                    while (getchar() != '\n');
                    continue;
                }

                if (guess == answer) {
                    printf("\nThat is correct! The winning number is %d.\n", answer);
                    printf("Score this game: %d\n\n", score);
                    break;
                } else {
                    score -= 10;
                    if (guess < answer) {
                        printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n\n", guess, score);
                        if (guess + 1 > low) low = guess + 1;
                    } else {
                        printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n\n", guess, score);
                        if (guess - 1 < high) high = guess - 1;
                    }
                }

                if (score <= 0) {
                    printf("\nOut of score! The winning number was %d.\n\n", answer);
                    break;
                }
            }
        } else {
            printf("Please enter only 1 or -1.\n\n");
        }
    }

    return 0;
}
