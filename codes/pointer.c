//Code by GVV Sharma
//April 14 2025
//using pointer arrays
#include <stdio.h>
#include <stdlib.h>

//Declaring functions 
void compare(int a,int b);
int sum(int a[], int m);

//begin main function
int main() {
//declare pointer arrays
int *a1,*b1,m = 3;
//Initializing sums
int a=0,b=0,i;
//File pointer
FILE *fp;

//Create a1
a1= (int *)malloc(m * sizeof( a1));
b1= (int *)malloc(m * sizeof( b1));

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
a = sum(a1,m);
//finding sum for B 
b = sum(b1,m);
//Call compare function 
compare(a,b);

//free memory
free(a1);
free(b1);
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
int sum(int *vec,int m){
int a=0;
  for (int i = 0; i < m; i++){
	  a=a+vec[i];
  }
  return a; //returning the sum to main
  }
//end sum function
