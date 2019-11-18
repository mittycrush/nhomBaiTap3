// Main24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void input(int& n) {
	cout << "Nhap n: "; cin >> n;
}
void output(int value) {
	cout << value << " ";
}
int fibonacci(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int fibona(int n) {
	if (n < 3) {
		return 1;
	}
	else {
		int f[1000];
		f[1] = 1;
		f[2] = 1;
		for (int i = 3; i < n; i++) {
			f[i] = f[i - 1] + f[i - 2];
		}
		return f[n];
	}
}
void exportFibo(int n) {
	
	for (int i = 1; i <= n; i++) {
		int temp = fibona(i);
		output(temp);
	}
	
}
int main()
{
	int n;
	input(n);
	exportFibo(n);
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
