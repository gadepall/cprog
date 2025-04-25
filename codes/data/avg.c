//code by GVV Sharma
//April 24 2025
//find the mean of given data
#include <stdio.h>
#include <stdlib.h>

//Declaring functions 
float mean(int *a, int n);

//begin main function
int main() {
	//Declaring data array
int a[]={36,35,50,46,60,55};
int n = sizeof(a)/sizeof(a[0]);
printf("%f\n%d",mean(a,n),n);
//printf("%f\n",((float)(mean(a)))/n);
 return 0;
}
//end main function

//mean function
float mean(int *a, int n){
int avg=0;
  for (int i = 0; i < n; i++){
	  avg=avg+a[i];
  }
  return ((float)avg)/n; //returning the mean to main
  }
//end mean function
