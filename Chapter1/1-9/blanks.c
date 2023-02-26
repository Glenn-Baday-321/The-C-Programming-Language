#include <stdio.h>
int main() {
    int c, isSpace;
    isSpace = 0;
    // keep getting char while it is not EOF
    while ((c = getchar()) != EOF) { 
        // if character is not space, then output it
        if (c != ' '){ 
            putchar(c);
            isSpace = 0;
        } 
        // if space and boolean isSpace is false, then put the ' ' char then break out so it only prints 1 instance of space
        if (c == ' ' && isSpace == 0) {
            putchar(c);
            isSpace = 1;
        }
    }
}