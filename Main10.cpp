// Main10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void input(int &n) {
	cout << "Nhap n: "; cin >> n;
}
bool isEven(int ele) {
	if (ele < 1) return 0;
	else {
		if (ele % 2 == 0)  return 1;
		else {
			return 0;
		}
	}
}
bool isPrimeEra(int ele) {
	vector<bool> flag;

	for (int i = 2; i <= ele; i++) {
		flag.push_back(true);
	}
	for (int i = 2; i <= ele; i++) {
		if (flag[i]) {
			for (int j = i * i; j <= ele; j += i) {
				flag[j] = 0;
			}
		}
	}
	if (flag[ele]) return 1;
	else return 0;
}
bool isPerfect(int ele) {
	int temp = 0;
	int half = ele / 2;
	for (int i = 1; i <= half; i++) {
		if (ele % i == 0)  temp += i;
	}
	if (temp == ele) return 1;
	else return 0;
}

int main()
{
	int n;
	input(n);
	int num[10000];
	int posEven =-1, posPrime=-1, posPerfect=-1;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	/*for (int i = 0; i <= n; i++) {
		if (isEven(num[i])) {
			posEven = i+1;
			break;
		}
	}*/
	for (int i = 0; i <= n; i++) {
		if (isPrimeEra(num[i])) {
			posPrime = i+1;
			break;
		}
	}
	/*for (int i = 0; i <= n; i++) {
		if (isPerfect(num[i])) {
			posPerfect = i+1;
			break;
		}
	}
	cout << posEven << endl;*/
	cout << posPrime << endl;
	cout << posPerfect << endl;
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
