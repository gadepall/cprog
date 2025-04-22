//code by GVV Sharma
//April 22, 2025
//function to compute the nth power of an integer

#include <stdio.h>

//function to compare the numbers a and b
int power(int a,int n){
	 if (n == 0){
	 return(1);
	 }
	 else{
		 return a*power(a,n-1);
	 }
 	}
//end function to compare the numbers a and b
//begin main function
int main(void) {
 int a=9,n=3;
 
 //call the function to compare the numbers
printf("%d\n",power(9,3));
 
 return 0;
}
//end main function



