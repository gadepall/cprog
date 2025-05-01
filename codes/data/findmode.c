//code by GVV Sharma
//May 1 2025
//find the mode of given data

#include <stdio.h>
#include "libs/datafun.h"

//Declaring functions 
int mode(int *a, int n);// the mode function

//begin main function
int main() {
	int ind;
int data[]={1,3,2,5,1,4,6,2,5,2,2,2,4,1,2,3,1,1,2,3,2,6,4,3,2,1,1,4,2,1,5,3,3,2,3,2,4,2,1,2};
    int n = sizeof(data)/sizeof(data[0]);

    printf("Original data:\n");
    printData(data, n);


    //get mode
ind = mode(data,n);

    //print mode
printf("\n%d,%d\n",ind,data[ind]);
    
    return 0;
}

//end main function


//mode  function
int mode(int *a, int n){
	int i,j,freq=0, maxfreq=0,modei;
  for ( i = 0; i < n; i++){
freq=0;
  for ( j = 0; j < n; j++){
	if(a[i]==a[j]){
		freq++;
  }}
  
	if(freq  > maxfreq){
	maxfreq=freq;
	modei = i;
	}
  }
  return modei; //returning the mode   
  }
//end mode  function

