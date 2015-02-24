#include<iostream>
using namespace std;
int SumOfRemainders(int n) {
	if (n == 0) {
		return 0;
	}
	if (n % 2 == 0) {
		return n % 3 + SumOfRemainders(n - 1);
	}
	else {
		return n % 5 + SumOfRemainders(n - 1);
	}
}
int main() {
	int number;
	cin >> number;
	cout << SumOfRemainders(number) << endl;
	return 0;
}

