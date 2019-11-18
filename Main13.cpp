// Main13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void input(int& n) {
	cout << "Nhap n: "; cin >> n;
}
void output(int result) {

	cout << result;
}
void input(float arr[], int &n) {
	cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
float lastestNumber(float arr[], int n) {
	for (int i = n; i >= 0; i--) {
		if (arr[i] > 0) return arr[i];
	}
	return -1;
}
int main() {
	int n;
	float arr[1000];
	input(arr, n);
	float result = lastestNumber(arr, n);
	output(result);
}