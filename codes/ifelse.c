//Code by Harini
//February 23, 2025
//Revised by GVV Sharma
//April 14, 2025
//add two sets of numbers and compare
#include <stdio.h>

//begin main function
int main() {
// first team scores
 int a1=-40,a2=10,a3=0;
// second team scores
 int b1=10,b2=0,b3=-40;

 //declaring  scores variables
int a,b;
 //sum of scores
 a=a1+a2+a3;
 b=b1+b2+b3;
 //comparing scores
 if (a>b){
	 printf("a scored more\n");
	}
 else if (a<b){
	 printf("b scored more\n");
	}
 else {
	 printf("they are equal\n");
}
//end comparison
 return 0;
}
//end main function



