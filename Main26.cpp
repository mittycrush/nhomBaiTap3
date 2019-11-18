#include <iostream> 
using namespace std;

void input(int& n, int arr[]) {
	cin >> n;
	for ( int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void output(int n, int arr[]) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}
void swapMinMax(int arr[], int n) {
	int min=arr[0], max=arr[0];
	int eleMax = 0, eleMin = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			eleMax = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			eleMin = i;
		}
	}
	swap(arr[eleMax], arr[eleMin]);
}
int main() {
	int n; 
	int arr[2000];
	input(n,arr);
	swapMinMax(arr, n);
	output(n, arr);

}