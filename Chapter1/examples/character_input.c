// this program only copies a file input and not an input from termnal
// to end input we use Ctrl+z for windows
#include <stdio.h>
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }   
}