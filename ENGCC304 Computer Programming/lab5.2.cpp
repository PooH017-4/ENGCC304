#include <stdio.h>

int main() {
    float score;
    char input[20];

    printf("enter score :\n");
    if (scanf("%f", &score) != 1) {
        printf("please enter number only.\n");
        return 0;
    }

    if (score < 50)
        printf("F !\n");
    else if (score < 55)
        printf("D !\n");
    else if (score < 60)
        printf("D+ !\n");
    else if (score < 65)
        printf("C !\n");
    else if (score < 70)
        printf("C+ !\n");
    else if (score < 75)
        printf("B !\n");
    else if (score < 80)
        printf("B+ !\n");
    else
        printf("A !\n");

    return 0;
}
