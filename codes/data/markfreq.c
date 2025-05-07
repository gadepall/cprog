//Code by G V V Sharma
//May 07, 2025
//Code to generate a table for data and frequency
#include <stdio.h>
#include <stdlib.h>
#include "libs/datafun.h"

int main() {
    int data[] = {4, 6, 7, 5, 3, 5, 4, 5, 2, 6, 2, 5, 1, 9, 6, 5, 8, 4, 6, 7};//data vector
    int datalen = sizeof(data) / sizeof(data[0]);
    int minval = min(data,datalen);//min value of data
    int maxval = max(data,datalen);// max value of data
    int freqlen = maxval-minval+1; // Range of data
    int *freq=createVec(freqlen); // Freqency vector

    // Count frequency of each mark
    for (int i = 0; i < datalen; i++) {
        freq[data[i]]++;
    }

    // Print table header
    printf("Mark\tFrequency\n");

    // Print frequencies
    for (int i = 0; i <= freqlen; i++) {
        if (freq[i] > 0) {
            printf("%d\t%d\n", i, freq[i]);
        }
    }

    return 0;
}

