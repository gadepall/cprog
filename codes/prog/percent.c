//Code by G V V Sharma
//May 15, 2025
//Code to generate a table to compute percentage
#include <stdio.h>

int main() {
    int colour[] = {4,3,3};//chip colours
    char x[3][6] = {"Green", "Blue", "Red"};
    // Print table header
    printf("Colour\tNumber\tPercentage\n");
    // Print table
    for (int i = 0; i < 3; i++) {
            printf("%s\t%d\t%f\n", x[i],colour[i], (float)colour[i]*10);
        }
    return 0;
}

