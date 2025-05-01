//Declaring functions 
int Pindex(int *a, int low, int high);
void swap(int *a,int *b);//swap two numbers
void printData(int *a, int n);
void median(int *a, int n);
void quicksort(int data[], int low, int high); 

//Swap two numbers
void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void printData(int *a, int n){
  for (int i = 0; i < n; i++){
	  printf("%d ",a[i]);
  }
}

//pivot index function
int Pindex(int *a, int low, int high){
	int i;
  for ( i = low; i < high; i++){
	  if(a[i] > a[high]){
		  swap(&a[i], &a[high]);
	  }
  }
  return i; //returning the pivot index  
  }
//end pivot index function

// Quicksort function
void quicksort(int data[], int low, int high) {
    if (low < high) {
        // Partition index
   	int pi = Pindex(data, low, high);

        // Recursively sort elements before and after partition
        quicksort(data, low, pi - 1);
        quicksort(data, pi + 1, high);
    }
}


