#include <stdio.h>
#define TRUE 1
#define FALSE 0
int main() {
    int frequency[3];
    int c, new_line, new_char, new_word, active;
    new_char = new_line = new_word = 0;
    active = FALSE;
    for (int i = 0; (c = getchar()) != EOF ; i++) {
        ++new_char;
        if (c == '\n') {
            ++new_line;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            active = FALSE;
        }
        else if (active == FALSE) {
            active = TRUE;
            ++new_word;
        }
    }
    frequency[0] = new_char;
    frequency[1] = new_word;
    frequency[2] = new_line;

    printf("Characters: %d\tWords: %d\tLines: %d", new_char, new_word, new_line);
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < frequency[j]; k++) {
            printf(" x");
        }
        printf("\n");
    }
    return 0;
}
