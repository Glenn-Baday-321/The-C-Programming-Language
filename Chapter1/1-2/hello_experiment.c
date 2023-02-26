#include <stdio.h>
int main() {
    printf("Hello, World!\c");
}
// the c program gives us a warning but still compiles and makes an executable file
// hello_experiment.c: In function 'main':
// hello_experiment.c:3:12: warning: unknown escape sequence: '\c'
//      printf("Hello, World!\c");
//             ^~~~~~~~~~~~~~~~~
// the program runs but gives the following output: Hello, World!c because it does not recognize \c as an escape character