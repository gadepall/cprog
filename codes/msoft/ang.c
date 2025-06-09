//Code by GVV Sharma
//June 8, 2025
//released under GNU GPL
//Find the angles of a triangle given 3 vertices
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "libs/matfun.h"
#include "libs/geofun.h"

extern double rad2deg; 

int main() {
int m=2, n=1;
double **A = createMat(m,n);
double **B = createMat(m,n);
double **C = createMat(m,n);
A[0][0] = 1;
A[1][0] = -1;
B[0][0] = -4;
B[1][0] = 6;
C[0][0] = -3;
C[1][0] = -5;
double **s_ab = Matsub(A,B,m,n);//A-B
double **s_bc = Matsub(B,C,m,n);//B-C
double **s_ca = Matsub(C,A,m,n);//C-A
printf("%lf %lf %lf\n,",angVec(s_ab, s_bc, m),angVec(s_bc, s_ca, m),angVec(s_ca, s_ab, m));//print angles

freeMat(A,2);
freeMat(B,2);
freeMat(C,2);

freeMat(s_ab,2);
freeMat(s_bc,2);
freeMat(s_ca,2);
return (0);
}

