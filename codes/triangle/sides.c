//Code by GVV Sharma
//June 6, 2025
//released under GNU GPL
//Find the sides of a triangle given 3 vertices
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "libs/matfun.h"
#include "libs/geofun.h"

int main() {
int x1=1, y1=-1, x2=-4, y2=6, x3=-3, y3=-5, m=2, n=1,p = 1;
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
double sideAB = Matnorm(s_ab,m);
double sideBC = Matnorm(s_bc,m); 
double sideCA = Matnorm(s_ca,m);
printMat(s_ab,m,n);//print A-B
printf("%f\n",sideCA);//print AB

freeMat(A,2);
freeMat(B,2);
freeMat(C,2);

freeMat(s_ab,2);
freeMat(s_bc,2);
freeMat(s_ca,2);
return (0);
}
