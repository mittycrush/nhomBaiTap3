// Main16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Main16.h"

using namespace std;

void input(int arr[], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int biggestNegative(int arr[], int n) {
	int max=-INT16_MAX;
	for (int i = 0; i < n; i++ ) {
		if (arr[i]<0 && arr[i]>max) max = arr[i];
	}
	if (max > -INT16_MAX) return max;
	else return 0;
}
void output(int result) {
	cout << result;
}
int main()
{
	int n;
	int arr[1000];
	input(arr,n);
	int result = biggestNegative(arr, n);
	output(result);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
