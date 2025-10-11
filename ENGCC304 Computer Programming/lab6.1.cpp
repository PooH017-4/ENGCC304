#include <stdio.h>

int main() {
    char *words[] = {"zero","one","two","three","four","five","six","seven","eight","nine",
                     "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
                     "seventeen","eighteen","nineteen","twenty"};
    int n;
    printf("Enter Number range 0-20 :");
    if (scanf("%d", &n) != 1) {
        printf("please enter number only.\n");
        return 0;
    }
    if (n >= 0 && n < 21)
        printf("Word is : %s\n", words[n]);
    else
        printf("out of range (0–20 only)\n");
    return 0;
}
