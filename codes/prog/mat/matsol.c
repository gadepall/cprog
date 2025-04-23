//Code by G V V Sharma
//April 23, 2025
//Find solution of simultaneous equations
//using matrices

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "libs/matfun.h"
#include "libs/geofun.h"


int  main()
{
double **A,**b,**xtemp, **A_T,**x;
int m=2,n=2;//matrix rows and columns
	    A = createMat(m,n);//Create A matrix array
	    b = createMat(m,1);//Create b vector array
A = loadMat("A.dat",m,n);//load matrix from file
b = loadMat("b.dat",m,1);//load vector from file
A_T=transposeMat(A,  m, n);//transpose  of A
xtemp = Matmul(A_T, b, m, 2, 1);//A transpose times b
x= Matscale(xtemp, m, 1, 0.5);//divide by 2 to obtain solution vector

//print matrices

printf("Matrix A\n\n");
printMat(A,m,n);
printf("\nVector b\n");
printMat(b,m,1);
printf("\nSolution x\n");
//printMat(xtemp,m,1);
printMat(x,m,1);

//free all matrix and vector arrays
freeMat(A, m);
freeMat(b, m);
freeMat(A_T, m);
freeMat(xtemp, m);
freeMat(x, m);
    return 0;
}
