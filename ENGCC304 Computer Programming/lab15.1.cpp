#include <stdio.h>
#include <ctype.h>

// ฟังก์ชันนับจำนวนคำ
int countWords(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Cannot open file %s\n", filename);
        return -1;
    }

    int c;
    int inWord = 0;
    int count = 0;

    while ((c = fgetc(file)) != EOF) {
        if (isspace(c)) {
            if (inWord) {
                count++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    // ถ้าไฟล์ไม่จบด้วย space
    if (inWord) count++;

    fclose(file);
    return count;
}

int main() {
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s", filename);

    int totalWords = countWords(filename);
    if (totalWords != -1)
        printf("Total number of words in '%s' : %d words\n", filename, totalWords);

    return 0;
}
