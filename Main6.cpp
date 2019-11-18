// Main6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

void input(int &n) {
	cout << " Nhap n: ";
	cin >> n;
}
bool isPerfect(int n)
{
	int sum = 0;
	for (int i = 1; i <= n/2; i++) {
		if (n % i == 0) sum += i;
	}
	if (sum == n) return true;
	else return false;
}
bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}
void output(int result)
{
	cout << result << endl;
}
int main()
{
	int n;
	input(n);
	int array[10000];
	int countPrime = 0, countPerfect = 0;
	for (int j = 0; j <= n - 1; j++) {
		cin >> array[j];
		if (isPrime(array[j])) countPrime += 1;
		if (isPerfect(array[j])) countPerfect += 1;
	}
	output(countPrime);
	output(countPerfect);

}

