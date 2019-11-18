// Main8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void input(int &n) {
	cout << " Nhap n : "; cin >> n;
}
bool isPrime(int value) {
	for (int i = 2; i <= sqrt(value); i++) {
		if (value % i == 0) return false;
	}
	return true;
}
//Sàng eratosthenes 
bool isPrimeEra(int n) {
	if (n < 2) return 0;
	else
	{
		bool flag[1000];
		for (int i = 2; i <=n ; i++) flag[i] = 1; //khởi tạo mảng có gt = true;
		// tạo sang và kiểm tra tính nguyên tố
		for (int i = 2; i <= n; i++)  {
			if (flag[i]) {
				for (int j = i * i; j <= n; j += i) {
					flag[j] = 0;
				}
			}
		}
		if (flag[n] == 1) return 1;
		else return 0;
	}
}
void output(double result) {
	cout << result;
}
int main()
{
	int n;
	input(n);
	int ar[1000];
	int count = 0, sumPrime = 0;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		if (isPrime(ar[i])) {
			count++;
			sumPrime += ar[i];
		}
	}
	
	double result = (double)sumPrime / count;
	double check;
	if (isPrimeEra(n))
		 check = 1;
	else check = 0;
	output(check);
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
