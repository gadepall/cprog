//code by harini 
//feb 23 2025
//revise by GVV Sharma
//April 14 2025
//using functions for arrays
#include <stdio.h>

//Declaring functions 
void compare(int a,int b);
int sum(int a[]);

//begin main function
int main() {
	//Declaring arrays
int a1[]={-40,10,0};
int b1[]={10,0,-40};
//Initializing sums
int a=0,b=0;
//finding sum for A 
a = sum(a1);
//finding sum for B 
b = sum(b1);
//Call compare function 
  compare(a,b);
 return 0;
}
//end main function

//compare function
void compare(int a,int b){
	 if (a>b){
	 printf("a scored more\n");
}
 else if (a<b){
	 printf("b scored more\n");
}
 else {
	 printf("they are equal\n");	 
}
 	}
//end compare function
//sum function
int sum(int a1[]){
int a=0;
  for (int i = 0; i <= 2; i++){
	  a=a+a1[i];
  }
  return a; //returning the sum to main
  }
//end sum function
