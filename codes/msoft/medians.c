//Code by GVV Sharma
//June 9, 2025
//released under GNU GPL
//Medians of a triangle given 3 vertices
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "libs/matfun.h"
#include "libs/geofun.h"


int main() {
double k=1;//ratio
double **A = createMat(2,1);
double **B = createMat(2,1);
double **C = createMat(2,1);
A[0][0] = 1;
A[1][0] = -1;
B[0][0] = -4;
B[1][0] = 6;
C[0][0] = -3;
C[1][0] = -5;
double **F = Matsec(A, B, 2, k);
double **D = Matsec(B, C, 2, k);
double **E = Matsec(C, A, 2, k);           
double **G = Matsec(A, D, 2, 2.0);//Centroid           
            
//printing median parameters
printMat(D,2,1);
printMat(E,2,1);
printMat(F,2,1);
printMat(G,2,1);

//freeing memory.
freeMat(A,2);
freeMat(B,2);
freeMat(C,2);
freeMat(D,2);
freeMat(E,2);
freeMat(F,2);  
freeMat(G,2);  
    return 0;
}
