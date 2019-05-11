
// Bubble sorting in ascending order 
// outer pointer loop remains fixed to n[0] until the whole array has been looped through
// inner pointer loops through from 1 index above n[0] 
// pointer values are compared at each iteration
// if the inner pointer value is greater than the outer pointer value, swap (opposite for descending order)

#include"pch.h"
#include <iostream>

using namespace std; 

void main() {

	void Bsort(int*, int);

	const int N = 10;
	int Arr[N] = {};
	int x = 0;

	
	for (int i = 0; i < N; i++) {		

		cout << " Input an integer to be sorted " << endl;
		cin >> x;

		Arr[i] = x;
	}

	Bsort(Arr, N);
	  
	cout << "The sorted integers are: ";

	for (int sorted : Arr)
		cout << sorted << " ";
}

void Bsort(int*ptr, int n) {

	void order(int*, int*);
	int j, k;						

	for (j = 0; j < n - 1; j++)      // outer ptr loop
		for (k = j + 1; k < n; k++)   // inner ptr loop
					  
			order(ptr + j, ptr + k);
}  

void order(int* num1, int* num2) {       

	if (*num1 > *num2) {
		int temp = *num1;       // swap 
		*num1 = *num2;
		*num2 = temp;
	}  

}  
