// Main23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void input(int &n, int arr[]) {
	cout << "Nhap n: "; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void output(int result) {
	cout << result;
}
int getDivisor(int a, int b) {
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else b -= a;
	}
	return a;
}
int biggestDivisor(int n, int arr[]) {
	if (n == 1) {
		return arr[0];
	}
	else {
		int temp= getDivisor(arr[0], arr[1]);
		for (int i = 2; i < n; i++) {
			temp = getDivisor(temp, arr[i]);
		}
		return temp;
	}
}
int main()
{
	int n;
	int arr[1000];
	input(n, arr);
	int flag = biggestDivisor(n, arr);
	output(flag);
}

