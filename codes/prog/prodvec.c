//code by GVV Sharma
//April 22 2025
//product of elements of a vector
#include <stdio.h>

//Declaring functions 
int prod_vec(int *a);

//begin main function
int main() {
	//Declaring arrays
int a[]={-12,-11,10};
//Initializing products
int y; 
//finding product for A 
y = prod_vec(a);
printf("%d\n",y);
 return 0;
}
//end main function

//product function
int prod_vec(int *a){
int y=1;
  for (int i = 0; i <= 2; i++){
	  y=y*a[i];
  }
  return y; //returning the product to main
  }
//end product function
