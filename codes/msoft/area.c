//Code by GVV Sharma
//June 9, 2025
//released under GNU GPL
//Find the area of a triangle given 3 vertices
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "libs/matfun.h"
#include "libs/geofun.h"

int main() {
double **A = createMat(2,1);
double **B = createMat(2,1);
double **C = createMat(2,1);
A[0][0] = 1;
A[1][0] = -1;
B[0][0] = -4;
B[1][0] = 6;
C[0][0] = -3;
C[1][0] = -5;
double **m_ab = Matsub(A,B,2,1);//A-B
double **m_ac = Matsub(A,C,2,1);//A-C
double **mat=Mathstack(m_ab, m_ac, 2, 1, 1);
double area = 0.5*Matdet(mat);//determinant of a 2x2 matrix
printMat(mat,2,2);
printf("%lf\n",area);//constant parameters for the lines
							 //
freeMat(A,2);
freeMat(B,2);
freeMat(C,2);

freeMat(m_ab,2);
freeMat(m_ac,2);
freeMat(mat,2);
return (0);
}
