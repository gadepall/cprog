//code by GVV Sharma
//April 24 2025
//find the max of given data
#include <stdio.h>
#include <stdlib.h>

//Declaring functions 
int max(int *a, int n);
int min(int *a, int n);

//begin main function
int main() {
	//Declaring data array
int a[]={32,41,28,54,35,26,23,33,38,40};
int n = sizeof(a)/sizeof(a[0]);
printf("%d,%d\n",max(a,n),min(a,n));
 return 0;
}
//end main function

//max function
int max(int *a, int n){
int temp=a[0];
  for (int i = 1; i < n; i++){
	  if(temp < a[i])
		  temp = a[i];
  }
  return temp; //returning the max to main
  }
//end max function
//min function
int min(int *a, int n){
int temp=a[0];
  for (int i = 1; i < n; i++){
	  if(temp > a[i])
		  temp = a[i];
  }
  return temp; //returning the min to main
  }
//end min function
