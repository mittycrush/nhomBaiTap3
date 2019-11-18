#include <iostream>

using namespace std;

void input(int &n, int arr[]) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int isFirstOdd(int n) {
	while (n > 10) {
		n /= 10;
	}
	if (n % 2 != 0) {
		return 1;
	}
	else return 0;
}
int processFindOdd(int n, int arr[]) {
	for (int i = 0; i < n; i++) {
		if (isFirstOdd(arr[i])) return arr[i];
	}
	return 0;
}
int main() {
	int n;
	int arr[100];
	input(n, arr);
	cout << processFindOdd(n, arr);
}
