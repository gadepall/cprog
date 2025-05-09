//Revised by GVV Sharma
//May 9, 2025
// Drawing double bar graph
#include <stdio.h>
#include <stdlib.h>
#include "libs/datafun.h"

#define MAX_HEIGHT 10//bar graph max height

void bar(int val,int thresh);

void drawDoubleBarGraph(int y1[], int y2[], char x[][5], int n) {
    // Find maximum value
    int l = (max(y1,  n)> max(y2,  n)) ? max(y1,  n) : max(y2,  n);//ternary operator
    //bar graph scaling factor
    float scale = (l > MAX_HEIGHT) ? (float)MAX_HEIGHT / l: 1.0;

    // Draw the bars vertically
    for (int row = MAX_HEIGHT; row > 0; row--) {
        for (int i = 0; i < n; i++) {
            printf(" ");
	    bar((int)(y1[i] * scale),row);
	    bar((int)(y2[i] * scale),row);

        }
        printf("\n");
    }

    // Draw x-axis
    for (int i = 0; i < 2*n; i++) {
        printf("---");
    }
    printf("\n");

    // Show year labels
    for (int i = 0; i < n; i++) {
        printf("%s ", x[i]);
    }
    printf("\n");
}

int main() {
    int y1[] = {350, 400, 450, 620};//y1
    int y2[] = {500, 525, 600, 650};//y2
    int datalen= sizeof(y1) / sizeof(y1[0]);
    char x[4][5] = {"1995", "1996", "1997", "1998"};

    drawDoubleBarGraph(y1, y2, x, datalen);

    return 0;
}
//drawing bars
void bar(int val,int thresh){
            if (val >= thresh)
                printf("| ");
            else
                printf("  ");
}
