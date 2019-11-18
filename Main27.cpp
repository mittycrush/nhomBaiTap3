#include <iostream> 

using namespace std; 
void input(int& n, int arr[]) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int reverseNumber(int num) {
	int result=0;
	while (num > 0) {
		int temp = num % 10;
		result = result * 10 + temp;
		num /= 10;
	}
	return result;
}
bool isSymmetric(int n) {
	if (reverseNumber(n) == n) {
		return 1;
	}
	else return 0;
}
int findSymmetric(int n, int arr[]) {
	for (int i = 0; i < n; i++) {
		if ( isSymmetric(arr[i]) ) {
			return arr[i];
		}
	}
	return 0;
}
int main() {
	int n;
	int arr[100];
	input(n, arr);
	cout << findSymmetric(n, arr);

}