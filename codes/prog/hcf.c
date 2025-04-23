//code by GVV Sharma
//April 23 2025
//reducing a fraction to lowest terms
//using the HCF
#include <stdio.h>

//Declaring functions 
void swap(int *a,int *b);//swap two numbers
int hcf(int a,int b);//hcf of two numbers
int min(int a,int b);//min modulus of two numbers
int abs(int a);//absolute value of a number

//begin main function
int main() {

//define numerator and denominator
int num=-45,den=30;
int hcfval;

hcfval = hcf(num,den);
printf("%d/%d\n",num/hcfval,den/hcfval);
 return 0;
}
//end main function

//absolute value
int abs(int a){
	 if (a < 0){
	 return -a;
}
 else {
	 return a;	 
}
 	}
//end absolute value
//compare function
int min(int a,int b){
	a = abs(a);
	b = abs(b);
	 if (a>=b){
	 return b;
}
 else {
	 return a;	 
}
 	}
//end compare function


//hcf function
int hcf(int num, int den){

int temp;
	//taking absolute values
num = abs(num);
den = abs(den);


//Ensuring numerator > denominator
if(num < den)
swap(&num,&den);

//Remainder
temp=num%den;

  while (temp != 0){ 
	  num = den;
	  den = temp;
	  temp=num%den;
  }
  return den; //returning the hcf to main
  }
//end hcf function

//Swap two numbers
void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
