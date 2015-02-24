#include <iostream>
using namespace std;
int main()
{
	int arr[4][4] = {
			{5, 6, 2, 1},
			{4, 12, 9, 33},
			{15, 14, 0, 22},
			{666, 100, 3, 10}
	};
	int n = 4;
	int k;
	for (k = 0; k <= n - 1; k++) {
		for (int i = k; i >= 0; i--) {
			cout << arr[k - i][i] << " ";
		}
	}
	for (k = n; k <= 2 * n - 2; k++) {
		for (int i = n - 1; i >= k - n + 1; i--) {
			cout << arr[k - i][i] << " ";
		}
	}
	cout << endl;
	return 0; 
}
