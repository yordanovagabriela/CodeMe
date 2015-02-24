#include <iostream>
using namespace std;
int main()
{
	unsigned int f_number;
	cin >> f_number;
	if (f_number >= 1 && f_number <= 100000) {
		if (f_number % 2 == 0) {
			cout << "Fakulteten nomer:\neven" << endl; }
		else {
			cout << "Fakulteten nomer:\nodd" << endl; } }
	else {
		cout << "Fakulteten nomer:\nerror" << endl; }
	return 0;
}