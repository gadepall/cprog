//Code by GVV Sharma
//April 14 2025
//using files
#include <stdio.h>

//Declaring functions 
void compare(int a,int b);
int sum(int a[]);

//begin main function
int main() {
	//Declaring arrays
int a1[3], b1[3];
//declare file pointer
FILE *fp;
int i;
//Initializing sums
int a=0,b=0;
	//Read  a from file a.dat
	//Open file pointer
fp = fopen("a.dat", "r");

//load data from file to array a1
 for(i=0;i<=2;i++){
   fscanf(fp,"%d",&a1[i]);
  }
 
//Cose file pointer

fclose(fp);
	//Read  a from file b.dat
	//Open file pointer
fp = fopen("b.dat", "r");

//load data from file to array b1
 for(i=0;i<=2;i++){
   fscanf(fp,"%d",&b1[i]);
  }
//Close file pointer
fclose(fp);

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
