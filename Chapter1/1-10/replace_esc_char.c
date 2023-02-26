#include <stdio.h>
int main() {
    int c, isNormal;
    while ((c = getchar()) != EOF) {
        isNormal = 0;
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            isNormal = 1;
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            isNormal = 1;
        }
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            isNormal = 1;
        }
        if (isNormal == 0)
            putchar(c);
    }
    return 0;
}
