#include <stdio.h>

#define TRUE 1
#define FALSE 0
int main() {
    int c, new_line, new_word, new_char, active;
    active = FALSE;
    new_char = new_line = new_word = 0;
    while ((c = getchar()) != EOF) {
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
    printf("Characters: %d\tWords: %d\tLines: %d\n", new_char, new_word, new_line);
    return 0;
}
