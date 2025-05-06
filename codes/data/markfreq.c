//Code by G V V Sharma
//May 06, 2025
//Code to generate a table for data and frequency
#include <stdio.h>

int main() {
    int data[] = {4, 6, 7, 5, 3, 5, 4, 5, 2, 6, 2, 5, 1, 9, 6, 5, 8, 4, 6, 7};
    int size = sizeof(data) / sizeof(data[0]);
    int freq[11] = {0}; // Assuming data are in the range 0 to 10

    // Count frequency of each mark
    for (int i = 0; i < size; i++) {
        freq[data[i]]++;
    }

    // Print table header
    printf("Mark\tFrequency\n");

    // Print frequencies
    for (int i = 0; i <= 10; i++) {
        if (freq[i] > 0) {
            printf("%d\t%d\n", i, freq[i]);
        }
    }

    return 0;
}

