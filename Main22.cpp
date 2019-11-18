#include<iostream>
#include<math.h>

using namespace std;
void input(int arr[], int &n) {
	cout << "Nhap n: "; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void output(bool check) {
	if (check) {
		cout << "Mang tang !";
	}
	else 
		cout << "Mang khong tang ! ";
}
bool increaseArray(int n, int arr[]) {
	if (n < 2) return 0;
	else {
		for (int i = 1; i < n; i++) {
			if (arr[i - 1] > arr[i]) return 0;
		 }
		return 1;
	}
	
}
int main() {
	int n;
	int arr[1000];
	input(arr, n);
	bool flag = increaseArray(n, arr);
	output(flag);
}