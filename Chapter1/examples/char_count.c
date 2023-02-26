#include <stdio.h>
// this works if input is file
// otherwise use Ctrl+z to stop and pring the output
int main() {
    long char_count = 0;
    while (getchar() != EOF) {
        ++char_count;
    }
    printf("Character count: %ld", char_count);
    
}