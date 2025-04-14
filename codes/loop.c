//code by harini 
//feb 23 2025
//revise by GVV Sharma
//April 14 2025
//compares sum of 2 arrays using a for loop
#include <stdio.h>

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
///end compare function
//begin main function
int main() {
	//Declaring arrays
int a1[]={-40,10,0};
int b1[]={10,0,-40};
//Initializing sums
int a=0,b=0;
  for (int i = 0; i <= 2; i++){
	  a=a+a1[i];
	  b=b+b1[i];
  }
//Call compare function 
  compare(a,b);
 return 0;
}
//end main function

