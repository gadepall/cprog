//code by harini 
//feb 23 2025
//code by GVV Sharma
//April 14  2025
//function to compare two numbers

#include <stdio.h>

//function to compare the numbers a and b
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
//end function to compare the numbers a and b
//begin main function
int main() {
 int a=-40,b=-40;
 
 //call the function to compare the numbers
 compare(a,b);
 
 return 0;
}
//end main function



