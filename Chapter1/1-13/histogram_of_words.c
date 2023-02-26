#include <stdio.h>
int main() {
    /*
        we can illustrate a graph horizontally where the y is the line
        and the x is the word length
             |
            y|___
              x
        we set array length to 10 or 10 words since we hvent learned about dynamic arrays yet
    */
   int c, char_count;
   int arr[10], i;
   char_count = i = 0;
    while ((c = getchar()) != EOF) {
        // count the character if it is not a space, tab or new line or end of file
        if (c != ' ' && c != '\t' && c != '\n' && c != EOF) {
            char_count++;
        }
        // if we encounter an escape sequence or space then we assign the char count to array and set it back to 0
        // then we increment i since we want to store the length of the next word in different index
        if (c == ' ' || c == '\t' || c == '\n') {
            arr[i] = char_count;
            if (char_count == 0) {
                arr[i] = 0;
            }
            char_count = 0; 
            i++;
        }
    }
    // printing the graph
    for (int j = 0; j < 10; j++) {
        printf("Word %3d: ", j+1);
        for (int k = 0; k < arr[j]; k++) {
            printf("x ");
        }
        printf("\n");
    }
    
    return 0;
}
