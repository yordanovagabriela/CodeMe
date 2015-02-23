#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

float fill_tetrahedron(int num) {
	float volume;
	volume = ((pow(2, 0.5))*(pow(num, 3))) / 12000;
	return volume;
}
int main() {
	cout << fixed << setprecision(2) << fill_tetrahedron(100) << endl;
	return 0;
}
