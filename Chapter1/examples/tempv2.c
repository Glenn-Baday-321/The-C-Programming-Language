#include <stdio.h>

// using define to define symbolic constants
#define UPPER 300
#define LOWER 0
#define STEP 20
int main() {
    //different implementaiton using for loop
    for (int fahr = LOWER; fahr <= UPPER; fahr+=STEP) {
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    return 0;
}
