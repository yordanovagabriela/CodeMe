#include<iostream>
using namespace std;

int main() {
	int score;
	cin >> score;
	while (score < 0 || score>100) {
		cout << "You entered invalid number.\nTry again.\n";
		cin >> score;
	}
	if (score >= 0 && score <= 59) {
		cout << "You scored F" << endl;
	}
	if (score > 59 && score <= 69) {
		cout << "You scored D" << endl;
	}
	if (score > 69 && score <= 79) {
		cout << "You scored C" << endl;
	}
	if (score > 79 && score <= 89) {
		cout << "You scored B" << endl;
	}
	if (score > 89 && score <= 100) {
		cout << "You scored A.Congratulations!" << endl;
	}
	return 0;
}


