#include <stdio.h>
int main() {
    int input, new_line, new_tab, new_space;
    new_line = new_tab = new_space = 0;
    while ((input = getchar()) != EOF) {
        if (input == '\n') {
            ++new_line;
        }
        if (input == '\t') {
            ++new_tab;
        }
        if (input == ' ') {
            ++new_space;
        }
    }
    printf("Line: %d\nTabs: %d\nSpaces: %d\n", new_line, new_tab, new_space);
    
}